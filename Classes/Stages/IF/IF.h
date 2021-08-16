#ifndef IF_H_INCLUDED
#define IF_H_INCLUDED
#include <iostream>
#include "../../Components/IF_ID/IF_ID.h"
#include "../../Components/PC/PC.h"
#include "../../Components/InstructionMemory/InstructionMemory.h"

using namespace std;

class IF
{
private:
  IF_ID if_id;
public:
  IF();
  ~IF();
  void execute(PC pc,InstructionMemory Im);
};

#endif
