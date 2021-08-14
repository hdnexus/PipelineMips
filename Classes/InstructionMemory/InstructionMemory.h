#ifndef INSTRUCTIONMEMORY_H_INCLUDED
#define INSTRUCTIONMEMORY_H_INCLUDED
#include <iostream>

using namespace std;

class InstructionMemory
{
private:
  unsigned int* instructionMemory;
  int numberOfInstructions;

public:
  InstructionMemory(int memorySize);
  ~InstructionMemory();
  unsigned int getInstruction(int index);
  void setInstruction(int index, unsigned int instruction);
  int getNumberOfInstructions();

};

#endif
