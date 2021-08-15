#include "./SignExtend.h"

//construtor da classe
SignExtend::SignExtend()
{
}

//destrutor da classe
SignExtend::~SignExtend()
{
}

bitset<32> SignExtend::ExtendingSign(int immediate)
{
  string extendedImm;
  string caseSignPositive = "0000000000000000"
  string caseSignNegative = "1111111111111111"
  bitset<16> binary(immediate);
  string addImmediate = binary.to_string();
  int sign = binary[15];
  if (sign == 0) // sinal positivo
  {
    extendedImm = caseSignPositive + addImmediate; // Ex: 0000 0000 0000 0000 0101 0101 0101 0101
  }
  else //sinal negativo
  {
    extendedImm = caseSignNegative + addImmediate; // Ex: 1111 1111 1111 1111 1101 0101 0101 0101
  }
  
  return (bitset<32>(extendedImm));
}
