#ifndef INSTRUCTIONMEMORY_H_INCLUDED
#define INSTRUCTIONMEMORY_H_INCLUDED
#include <iostream>
#include <vector>
#include "./Instruction.h"

using namespace std;

class InstructionMemory
{
private:
  vector<Instruction> instructionMemory;
  int numberOfInstructions;

public:
  InstructionMemory(int memorySize);
  ~InstructionMemory();
  Instruction getInstruction(int index);
  void setInstruction(int index, int instruction);
  int getNumberOfInstructions();
};

#endif
