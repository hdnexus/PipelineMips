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
  bitset<16> binary(immediate);
  int sign = binary[15];
  if (sign == 0) // sinal positivo
  {
    extendedImm = "0000000000000000" + binary.to_string<char, std::string::traits_type, std::string::allocator_type>(); // Ex: 0000 0000 0000 0000 0101 0101 0101 0101
  }
  else //sinal negativo
  {
    extendedImm = "1111111111111111" + binary.to_string<char, std::string::traits_type, std::string::allocator_type>(); // Ex: 1111 1111 1111 1111 1101 0101 0101 0101
  }
  return (bitset<32>(extendedImm));
}