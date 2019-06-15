//
// Created by Jenya on 14/06/2019.
//

#ifndef HW3_MIPS_H
#define HW3_MIPS_H

#include "bp.hpp"


enum Register {SP = 29, FP = 30, RA = 31};

using namespace std;
struct Mips {
    CodeBuffer &cf = CodeBuffer::instance();

    bool commentsIsOn = true;

    //http://www.egr.unlv.edu/~ed/MIPStextSMv11.pdf



    stack <string> stack;
    string registers_pool[32]; // we use only 8 to 25
    bool free_registers[32];

    void pushToStack(int reg) {
        if (commentsIsOn) {
            cf.emit("# push $" + to_string(reg));
        }

        cf.emit("subu $sp, $sp, 4");
        cf.emit("sw $" + to_string(reg) + ", ($sp)");
        stack.push(registers_pool[reg]);
        free_registers[reg] = false;

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void popFromStack(int reg) {
        if (commentsIsOn) {
            cf.emit("# pop to $" + to_string(reg));
        }

        cf.emit("lw $" + to_string(reg) + ", ($sp)");
        cf.emit("addu $sp, $sp, 4");
        stack.pop();
        free_registers[reg] = true;

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void popFromStack() {
        if (commentsIsOn) {
            cf.emit("# pop");
        }

        cf.emit("addu $sp, $sp, 4");
        stack.pop();

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void assign(int rDest, int rSrc) {
        if (commentsIsOn) {
            cf.emit("# $" + to_string(rDest) + "=$" + to_string(rSrc));
        }

        cf.emit("move $" + to_string(rDest) + ", $" + to_string(rSrc));

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void jump(int reg) {
        if (commentsIsOn) {
            cf.emit("# goto $" + to_string(reg));
        }

        cf.emit("jr $" + to_string(reg));

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

};

#endif //HW3_MIPS_H
