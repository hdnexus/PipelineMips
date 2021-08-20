#ifndef INSTRUCTION_H_INCLUDED
#define INSTRUCTION_H_INCLUDED
#include <iostream>
#include "../../Mips/Mips.h"

using namespace std;

class Instruction
{
private:
public:
    char type;
    int funct = -1;
    int opcode = -1;
    int immediate = -1;
    int shamt = -1;
    int address = -1;
    int rs = -1;
    int rt = -1;
    int rd = -1;

    Instruction(int binaryValue)
    {
        Mips mips;
        int opcode = mips.getOpcodeValue(binaryValue);

        if (opcode == 0)
            this->type = 'R';
        else if (opcode == 2 || opcode == 3)
            this->type = 'J';
        else if (opcode == 4 || opcode == 5 || opcode == 8 || opcode == 35 || opcode == 43)
            this->type = 'I';
        else
            this->type = 'U';

        if (this->type == 'R')
        {
            this->opcode = mips.getOpcodeValue(binaryValue);
            this->rs = mips.extractRs(binaryValue);
            this->rt = mips.extractRt(binaryValue);
            this->rd = mips.extractRd(binaryValue);
            this->shamt = mips.extractShamt(binaryValue);
            this->funct = mips.extractFunct(binaryValue);
        }
        else if (this->type == 'I')
        {
            this->opcode = mips.getOpcodeValue(binaryValue);
            this->rs = mips.extractRs(binaryValue);
            this->rt = mips.extractRt(binaryValue);
            this->immediate = mips.extractImmediate(binaryValue);
        }
        else if (this->type == 'J')
        {
            this->opcode = mips.getOpcodeValue(binaryValue);
            this->address = mips.extractAddress(binaryValue);
        }
    }

    Instruction() {}

    ~Instruction() {}
};

#endif
