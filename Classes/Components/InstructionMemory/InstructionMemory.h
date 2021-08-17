#ifndef INSTRUCTIONMEMORY_H_INCLUDED
#define INSTRUCTIONMEMORY_H_INCLUDED
#include <iostream>

using namespace std;

class InstructionMemory
{
private:
  int *instructionMemory;
  int numberOfInstructions;

public:
  InstructionMemory(int memorySize);
  ~InstructionMemory();
  int getInstruction(int index);
  void setInstruction(int index, unsigned int instruction);
  int getNumberOfInstructions();
};

#endif
