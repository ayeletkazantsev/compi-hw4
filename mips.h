//
// Created by Jenya on 14/06/2019.
//

#ifndef HW3_MIPS_H
#define HW3_MIPS_H

#include "bp.hpp"
#include "parser.hpp"


string convert_to_string(int val)
{
    stringstream ss;
    ss << val;
    return ss.str();
}


enum Register {SP = 29, FP = 30, RA = 31};

using namespace std;
struct Mips {
    CodeBuffer &cf;

    bool commentsIsOn;

    //http://www.egr.unlv.edu/~ed/MIPStextSMv11.pdf



    stack <string> s;
    string registers_pool[32]; // we use only 8 to 25
    bool free_registers[32];

    Mips() : cf(CodeBuffer::instance()), commentsIsOn(true) {
        for (int i=0; i<32; ++i) {
            registers_pool[i] = convert_to_string(i);
            free_registers[i] = true;
        }
    }

    void pushToStack(int reg) {
//        if (commentsIsOn) {
//            cf.emit("# push $" + convert_to_string(reg));
//        }

        cf.emit("subu $sp, $sp, 4");
        cf.emit("sw $" + convert_to_string(reg) + ", ($sp)");
        s.push(registers_pool[reg]);
        free_registers[reg] = true;

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void popFromStack(int reg) {
//        if (commentsIsOn) {
//            cf.emit("# pop to $" + convert_to_string(reg));
//        }

        cf.emit("lw $" + convert_to_string(reg) + ", ($sp)");
        cf.emit("addu $sp, $sp, 4");

        free_registers[reg] = false;
        registers_pool[reg] = s.top();

        s.pop();
        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void popFromStack() {
//        if (commentsIsOn) {
//            cf.emit("# pop");
//        }

        cf.emit("addu $sp, $sp, 4");
        s.pop();

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void setOnFrame(int reg, int offset) {
//        if (commentsIsOn) {
//            cf.emit("# set $" + convert_to_string(reg) + " on " + convert_to_string(offset) + "th place of frame");
//        }

        cf.emit("sw $" + convert_to_string(reg) + "," + convert_to_string((-4) * offset) + "($fp)");
        free_registers[reg] = true;

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void assign(int rDest, int rSrc) {
        if (commentsIsOn) {
            cf.emit("# $" + convert_to_string(rDest) + "=$" + convert_to_string(rSrc));
        }

        cf.emit("move $" + convert_to_string(rDest) + ", $" + convert_to_string(rSrc));

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void jump(int reg) {
        if (commentsIsOn) {
            cf.emit("# goto $" + convert_to_string(reg));
        }

        cf.emit("jr $" + convert_to_string(reg));

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void bpatch(const vector<int>& l, const std::string &label) {
        if (commentsIsOn) {
            cf.emit("# backpatching " + label);
        }

        cf.bpatch(l,label);

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void debugPrint(const string &str) {
        if (commentsIsOn)
//            cout << "# DEBUG: " << str << endl;
            cf.emit("# DEBUG: " + str);
    }

    void functionCall(Type* leftSideOfRule, string name, NameMultiTypeInfo* expList, string returnType) {
        debugPrint("Caller's set activation record for " + name);
        // ==================== [Start] Activation record - Caller's frame ====================
        vector<string> exp_args_types;
        vector<int> argumentsRegs;

        if (expList) {
            exp_args_types = expList->types;
            argumentsRegs = expList->registers;
        }

        vector<int> backupRegisters;

        debugPrint("\t 1. Push saved registers");
        // 1. Push saved registers
        for (int i=8; i<=25; ++i)
        {
            if (Parser::isRegisterAvailable(i) == false)
            {
                pushToStack(i);
                backupRegisters.push_back(i);
                Parser::setRegister(i, true);
                debugPrint("\t pushed saved register $" + convert_to_string(i));
            }
        }
        //Parser::clearTempRegisters(); // todo add assert - all temp registers are free to use

        debugPrint("\t 2. Push caller's fp");
        // 2. Push caller's fp
        pushToStack(FP);

        debugPrint("\t 3. Push caller's ra");
        // 3. Push caller's ra
        pushToStack(RA);

        debugPrint("\t 4. Push calle's arguments");
        // 4. Push calle's arguments
        for (int i = exp_args_types.size()-1; i>=0; --i)
        {
            pushToStack(argumentsRegs[i]);
            Parser::setRegister(argumentsRegs[i],true);
            debugPrint("\t pushed arg from $" + convert_to_string(argumentsRegs[i]));
        }

        //cf.emit("subu $fp, $sp, 4"); // start new frame for current function (named ID)

        // ==================== [END] Activation record - Caller's frame ====================

        debugPrint("\t --- goto to  " + name + "---");
        if (name == "main") {
            cf.emit("jal main");
        }
        else {
            cf.emit("jal _" + name); //jump to function called
        }
        debugPrint("\t --- returned from  " + name + "---");

        // callee done his job ($ra saved on jal) we are back to caller's frame

        // ==================== [Start] Activation record - Callee's frame ====================

        debugPrint("\t 4. Pop callee's arguments");
        // 4. Pop callee's arguments
        for (int i = exp_args_types.size()-1; i>=0; --i)
        {
            popFromStack();
        }

        debugPrint("\t 3. Pop caller's ra");
        // 3. Pop caller's ra
        popFromStack(RA);

        debugPrint("\t 2. Pop caller's fp");
        // 2. Pop caller's fp
        popFromStack(FP);

        debugPrint("\t 1. Pop saved registers");
        // 1. Pop saved registers (Restore saved registers)
        for (int i = backupRegisters.size() - 1; i >= 0; --i)
        {
            popFromStack(backupRegisters[i]);
            Parser::setRegister(backupRegisters[i], false);
            debugPrint("\t popped saved register $" + convert_to_string(backupRegisters[i]));
        }

        //cout << "stack size after is: " << stack.size() << endl;

        if (returnType == "BOOL"){
            int quad = cf.emit("beq $v0, 0, ");
            leftSideOfRule->true_list = cf.makelist(cf.emit("j "));
            bpatch(cf.makelist(quad),cf.genLabel());
            leftSideOfRule->false_list=cf.makelist(cf.emit("j "));
        }
        else
        {
            // store function result in reg (result was stored on $v0 by calle?)
            int reg = Parser::getAvailableRegister();
            Parser::setRegister(reg,false);
            debugPrint(convert_to_string(reg) + " used for result value of " + name);
            cf.emit("add $" + convert_to_string(reg) + ", $v0, 0");
            leftSideOfRule->reg = reg;
        }

        Parser::clearTempRegisters();
    }

    void assignExpressionToId(string name, YYSTYPE exp, Type* leftSideOfRule, bool firstTime) {
        string expType = Parser::getExpType(exp);
        SymbolTableEntry* e = Parser::getIdEntry(name,false);
        int reg = Parser::getAvailableRegister();
        Parser::setRegister(reg,false);
        if (expType == "BOOL")
        {
            bpatch(exp->true_list,cf.genLabel());
            cf.emit("li $" + convert_to_string(reg) + ", 1");
            cf.emit("sw $"+ convert_to_string(reg) +"," + convert_to_string((-4) * e->offset) + "($fp)");
            Parser::setRegister(reg,true);
            leftSideOfRule->next_list = cf.makelist(cf.emit("j  "));
            bpatch(exp->false_list,cf.genLabel());
            cf.emit("sw $0," + convert_to_string((-4) * e->offset) + "($fp)");
        }
        else
        {
            if (firstTime) {
                pushToStack(exp->reg);
            }
            else {
                setOnFrame(exp->reg, e->offset);
            }
            Parser::setRegister(exp->reg, true);
        }
    }

    void examineExp(YYSTYPE e)
    {
        YYSTYPE e1=e;
    }

};

#endif //HW3_MIPS_H
