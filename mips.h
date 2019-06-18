//
// Created by Jenya on 14/06/2019.
//

#ifndef HW3_MIPS_H
#define HW3_MIPS_H

#include "bp.hpp"

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

    Mips() : cf(CodeBuffer::instance()), commentsIsOn(false) {}

    void pushToStack(int reg) {
        if (commentsIsOn) {
            cf.emit("# push $" + convert_to_string(reg));
        }

        cf.emit("subu $sp, $sp, 4");
        cf.emit("sw $" + convert_to_string(reg) + ", ($sp)");
        s.push(registers_pool[reg]);
        free_registers[reg] = true;

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void popFromStack(int reg) {
        if (commentsIsOn) {
            cf.emit("# pop to $" + convert_to_string(reg));
        }

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
        if (commentsIsOn) {
            cf.emit("# pop");
        }

        cf.emit("addu $sp, $sp, 4");
        s.pop();

        if (commentsIsOn) {
            cf.emit("");
        }
    }

    void setOnFrame(int reg, int offset) {
        if (commentsIsOn) {
            cf.emit("# set $" + convert_to_string(reg) + " on " + convert_to_string(offset) + "th place of frame");
        }

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

    void setRegister() {}

    void debugPrint(const string &str) {
        if (commentsIsOn)
            cout << "# DEBUG: " << str << endl;
    }

};

#endif //HW3_MIPS_H
