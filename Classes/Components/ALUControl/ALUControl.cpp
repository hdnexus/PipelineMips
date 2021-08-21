#include "ALUControl.h"

//construtor da classe
ALUControl::ALUControl()
{
}

//destrutor da classe
ALUControl::~ALUControl()
{
}

//função realizada pelo ALUControl que é feita
//para obter o tipo de operação que será realizada na ALU
string ALUControl::Output(int funct, bool ALUOp1, bool ALUOp0)
{
  if (ALUOp1 == true and ALUOp0 == false) //para operações de tipo R
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
  else if (ALUOp1 == false and ALUOp0 == false) //para operações de tipo I
  {
    return "IType";
  }
  else if (ALUOp1 == false and ALUOp0 == true) //para branch equal e branch not equal
  {
    return "BranchType";
  }
}