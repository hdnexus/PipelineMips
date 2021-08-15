#include "./ShiftLeft.h"

//construtor da classe
ShiftLeft::ShiftLeft()
{
}

//destrutor da classe
ShiftLeft::~ShiftLeft()
{
}

//Função do Shift Left 2
int ShiftLeft::Shiftting(int value)
{
  int shifftedValue = value << 2; //shift left 2, mesma coisa que multiplicar por 4
  return shifftedValue;           //retorna o valor shiftado.
}