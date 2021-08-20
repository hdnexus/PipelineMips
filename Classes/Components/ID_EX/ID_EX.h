#ifndef ID_EX_H_INCLUDED
#define ID_EX_H_INCLUDED
#include <iostream>
#include "../InstructionMemory/Instruction.h"
#include "../Registers/Register.h"
#include "../ControlSignals/ControlSignals.h"
#include <bitset>

using namespace std;

class ID_EX
{
private:
public:
    ControlSignals controlSignal;
    Register rd1, rd2;
    Instruction *instruction;
    bitset<32> signExtend;
    int pcIncremented;

    ID_EX() {}
    ~ID_EX() {}
};

#endif
