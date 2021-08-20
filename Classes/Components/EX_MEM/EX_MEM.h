#ifndef EX_MEM_H_INCLUDED
#define EX_MEM_H_INCLUDED
#include <iostream>
#include "../InstructionMemory/Instruction.h"
#include "../Registers/Register.h"
#include "../ControlSignals/ControlSignals.h"
#include <bitset>

using namespace std;

class EX_MEM
{
private:
public:
  ControlSignals controlSignal;
  Instruction *instruction;
  Register rd2;
  bool aluZero;
  int pcBranchIncremented;
  int aluResult;
  int wrIndex;

  EX_MEM() {}
  ~EX_MEM() {}
};

#endif
