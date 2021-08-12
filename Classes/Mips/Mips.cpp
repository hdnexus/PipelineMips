#include "./Mips.h"

Mips::Mips()
{
}

bitset<6> Mips::getOpcodeValue(int binaryValue){
   Util util;
   bitset<32> binary(binaryValue);
   bitset<6> opCode;

   for(int i = 0 ; i < 6 ; i++)
      opCode[i] = binary[6 - i];


   return opCode;
   
}
