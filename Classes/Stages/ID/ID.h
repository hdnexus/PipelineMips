#ifndef ID_H_INCLUDED
#define ID_H_INCLUDED
#include <iostream>
#include "../../Components/InstructionMemory/Instruction.h"
#include "../../Components/Registers/Registers.h"
#include "../../Components/SignExtend/SignExtend.h"
#include "../../Components/ControlSignals/ControlSignals.h"
#include "../../Components/ID_EX/ID_EX.h"

#include <bitset>

using namespace std;

class ID
{
private:
  SignExtend signExtend;

public:
  ID();
  void execute(Instruction instruction, Registers *bankOfRegisters, ID_EX *id_ex, int pcIncremented);
  ~ID();
};

#endif
