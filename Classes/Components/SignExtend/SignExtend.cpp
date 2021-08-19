#include "./SignExtend.h"


SignExtend::SignExtend()
{
}


SignExtend::~SignExtend()
{
}

bitset<32> SignExtend::ExtendingSign(int immediate)
{
  string extendedImm; //string do immediate extendido

  string caseSignPositive = "0000000000000000"; //Adiciona 16 0's a esquerda
  string caseSignNegative = "1111111111111111"; //Adiciona 16 1's a esquerda

  bitset<16> binary(immediate);             //immediate em binário
  string addImmediate = binary.to_string(); //string do immediate

  int sign = binary[15]; //bit de sinal do immediate.

  if (sign == 0) // sinal positivo, adiciona 16 0's a esquerda
  {
    extendedImm = caseSignPositive + addImmediate; // Ex: 0000 0000 0000 0000 0101 0101 0101 0101
  }
  else //sinal negativo, adiciona 16 1's a esquerda
  {
    extendedImm = caseSignNegative + addImmediate; // Ex: 1111 1111 1111 1111 1101 0101 0101 0101
  }

  return (bitset<32>(extendedImm)); //retorna em bitset o immediate extendido.
}
