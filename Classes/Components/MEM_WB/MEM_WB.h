#ifndef MEM_WB_H_INCLUDED
#define MEM_WB_H_INCLUDED
#include <iostream>
#include "../InstructionMemory/Instruction.h"
#include "../Registers/Register.h"
#include "../ControlSignals/ControlSignals.h"
#include <bitset>

using namespace std;

class MEM_WB
{
private:
public:
  ControlSignals controlSignal;
  Instruction *instruction;
  int aluResult;
  int readData;
  int wrIndex;

  MEM_WB() {}
  ~MEM_WB() {}
};

#endif
