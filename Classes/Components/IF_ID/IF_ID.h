#ifndef IF_ID_H_INCLUDED
#define IF_ID_H_INCLUDED
#include <iostream>
#include "../InstructionMemory/Instruction.h"

using namespace std;


class IF_ID
{
private:
    int pcIncremented;
    Instruction *instruction;
    
public:
    IF_ID() {} 
    ~IF_ID() {} 
    void setInstruction(Instruction instruction)
    {
        this->instruction = &instruction;
    }
    void setPcIncremented(int value)
    {
        this->pcIncremented = value;
    }

    int getPcIncremented()
    {
        return this->pcIncremented;
    }

    Instruction getIstruction()
    {
        return *this->instruction;
    }
};

#endif
