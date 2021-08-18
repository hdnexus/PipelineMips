#include "./ALU.h"

ALU::ALU()
{
}

ALU::~ALU()
{
}

int ALU::add(int a, int b)
{

  unsigned carry;
  while (b != 0)
  {
    carry = a & b;
    a = a ^ b;
    b = carry << 1;
  }
  return a;
}

void ALU::setZero(bool value)
{
  this->zero = value;
}

bool ALU::getZero()
{
  return this->zero;
}

int ALU::ALUOperation(unsigned int input1, unsigned int input2)
{
  string ALUControl = "Chamar função de ALUControl para pegar a operação";
  int operationResult;
  if (ALUControl == "NOTR")
    operationResult = input1 + input2;

  else
  {
    if (ALUControl == "SLL")
    {
      int shamt = this->mips.extractShamt(input1);
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
    this->setZero(0);
  }
  else
  {
    this->setZero(1);
  }

  return operationResult;
}
