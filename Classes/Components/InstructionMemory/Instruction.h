#ifndef INSTRUCTION_H_INCLUDED
#define INSTRUCTION_H_INCLUDED
#include <iostream>
#include "../../Mips/Mips.h"

using namespace std;

class Instruction
{
private:
    char type;
    int funct;
    int opcode;
    int immediate;
    int shamt;
    int address;
    int rs;
    int rt;
    int rd;

public:
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

    Instruction(){}

    ~Instruction(){}
};

#endif
