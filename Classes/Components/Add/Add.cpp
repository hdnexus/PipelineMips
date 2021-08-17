#include "./Add.h"

//construtor da classe
ADD::ADD()
{
}

//destrutor da classe
ADD::~ADD()
{
}

unsigned int ADD::addOperation(unsigned int input1, unsigned int input2)
{
  unsigned int output;
  output = input1 + input2;
  return output;
}