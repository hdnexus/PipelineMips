#include "./ALU.h"

//construtor da classe
ALU::ALU()
{
}

//destrutor da classe
ALU::~ALU()
{
}

//funçaõ para setar o zero da ALU
void ALU::setZero(bool value)
{
  this->zero = value;
}

//funçaõ para pegar o zero da ALU
bool ALU::getZero()
{
  return this->zero;
}

//Função onde é realizada a operação aritmetica da ALU
int ALU::ALUOperation(Instruction instruction, int input1, int input2, string ALUControl)
{

  int operationResult;

  if (ALUControl == "IType") //Para casos de Load Word e Store Word
  {
    operationResult = input1 + input2;
  }
  else if (ALUControl == "BranchType") //Para casos de BEQ e BNE
  {
    operationResult = input1 - input2;
  }
  else //Para Tipos R
  {
    if (ALUControl == "SLL")
    {
      int shamt = instruction.shamt;
      operationResult = input1 << shamt;
    }
    else if (ALUControl == "ADD")
    {
      operationResult = input1 + input2;
    }
    else if (ALUControl == "SUB")
    {
      operationResult = input1 - input2;
    }
    else if (ALUControl == "AND")
    {
      operationResult = input1 & input2;
    }
    else if (ALUControl == "OR")
    {
      operationResult = input1 | input2;
    }
    else if (ALUControl == "SLT")
    {
      operationResult = input1 < input2;
    }
  }

  if (operationResult == 0)
  {
    this->setZero(1); //Zero da ALU
  }
  else
  {
    this->setZero(0); //Zero da ALU
  }

  return operationResult;
}
