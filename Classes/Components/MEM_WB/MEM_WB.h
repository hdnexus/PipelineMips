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
  ControlSignals controlSignal; //Acho que ta OK
  int shamt, funct;             //Não seria melhor a instrução?
  //////Precisamos do resultado da alu aqui
  //////Precisamos do read data do componente de data memory
  //////Precisamos do write register index

  MEM_WB() {}
  ~MEM_WB() {}
};

#endif
