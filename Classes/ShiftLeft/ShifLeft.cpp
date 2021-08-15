#include "./ShiftLeft.h"

//construtor da classe
ShiftLeft::ShiftLeft()
{
}

//destrutor da classe
ShiftLeft::~ShiftLeft()
{
}

int ShiftLeft::Shiftting(int value)
{
  int shifftedValue = value << 2;
  return shifftedValue;
}