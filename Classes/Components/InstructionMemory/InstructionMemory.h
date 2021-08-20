#ifndef INSTRUCTIONMEMORY_H_INCLUDED
#define INSTRUCTIONMEMORY_H_INCLUDED
#include <iostream>
#include <vector>
#include "./Instruction.h"
#include "../../FileHandler/FileHandler.h"
#include <fstream>

using namespace std;

class InstructionMemory
{
private:
  vector<Instruction> instructionMemory;
  int numberOfInstructions = 0;

public:
  InstructionMemory(int memorySize);
  ~InstructionMemory();
  void initializeInstructionMemory();
  Instruction getInstruction(int index);
  void setInstruction(int index, int instruction);
  int getNumberOfInstructions();
  void printMemory();
};

#endif
