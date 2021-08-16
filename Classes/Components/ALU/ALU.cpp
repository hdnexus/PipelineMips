#include "./ALU.h"

//construtor da classe
ALU::ALU()
{
}

//destrutor da classe
ALU::~ALU()
{
}

int ALU::ALUOperation(unsigned int input1, unsigned int input2)
{
  string ALUControl = "Chamar função de ALUControl para pegar a operação";

  if (ALUControl == "NOTR")
  {
    return input1 + input2;
  }
  else
  {
    if (ALUControl == "SLL")
    {
      //return input1 << shamt; TEM QUE PEGAR ESSE SHAMT DA INSTRUÇÃO DE ALGUM JEITO
    }
    else if (ALUControl == "JR")
    {
      //nao sei se ta certo isso aqui
    }
    else if (ALUControl == "ADD")
    {
      return input1 + input2;
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
      return (int)input1 < input2; //Não sei se essa operação esta certa
    }
  }
}
