#include "./Add.h"

//construtor da classe
ADD::ADD()
{
}

//destrutor da classe
ADD::~ADD()
{
}

//Função para a operação que é feita no componente de add
//Recebe como input dois valores, e retorna a soma desses valores
int ADD::addOperation(int input1, int input2)
{
  int output;
  output = input1 + input2;
  return output;
}