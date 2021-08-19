#include "ALUControl.h"

ALUControl::ALUControl()
{
  this->ALUOp1 = 0;
  this->ALUOp0 = 0;
}

void ALUControl::SetALU(bool *ALUOp1, bool *ALUOp0)
{
  this->ALUOp1 = ALUOp1;
  this->ALUOp0 = ALUOp0;
}

string ALUControl::Output(unsigned int funct)
{
  string instruction;

  if (*ALUOp1 == true and *ALUOp0 == false)
  {
    if (funct == 0)
      return "SLL";

    else if (funct == 32)
      return "ADD";

    else if (funct == 34)
      return "SUB";

    else if (funct == 36)
      return "AND";

    else if (funct == 37)
      return "OR";

    else if (funct == 42)
      return "SLT";
  }
  else if (*ALUOp1 == false and *ALUOp0 == false)
  {
    return "LWandSW";
  }
  else if (*ALUOp1 == false and *ALUOp0 == true)
  {
    return "BranchType";
  }
}