#include "./ALU.h"


ALU::ALU()
{
}

ALU::~ALU()
{
}

int ALU::add(int a , int b){
 
    unsigned carry;
    while (b != 0)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a; 
}

int ALU::ALUOperation(unsigned int input1, unsigned int input2)
{
  string ALUControl = "Chamar função de ALUControl para pegar a operação";

  if (ALUControl == "NOTR")
        return input1 + input2;

  else
  {
    if (ALUControl == "SLL")
    {
      int shamt = this->mips.extractShamt(input1);
      return input1 << shamt; 
    }
    else if (ALUControl == "JR")
    {
      //nao sei se ta certo isso aqui
    }
    else if (ALUControl == "ADD")
    {
      return  input1 + input2;
    }
    else if (ALUControl == "SUB")
    {
      return input1 - input2;
    }
    else if (ALUControl == "AND")
    {
      return (int)input1 & input2;
    }
    else if (ALUControl == "OR")
    {
      return (int)input1 | input2;
    }
    else if (ALUControl == "SLT")
    {
      return input1 < input2; //Não sei se essa operação esta certa
    }
  }
}
