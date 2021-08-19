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
  ControlSignals controlSignal; //Acho que ta OK
  int shamt, funct;             //Não seria melhor a instrução?
  Register rd2;
  bool branchZero;         //Acho que ta OK
  int pcBranchIncremented; //Acho que ta OK
  //////Precisamos do resultado da alu aqui
  //////Precisamos do write register index aqui

  EX_MEM() {}
  ~EX_MEM() {}
};

#endif
