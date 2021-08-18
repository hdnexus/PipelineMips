#ifndef ID_H_INCLUDED
#define ID_H_INCLUDED
#include <iostream>
#include "../../Components/InstructionMemory/Instruction.h"

using namespace std;

class ID
{
private:
public:
  ID(Instruction instruction);
  ~ID();
};

#endif
