#include "./Mips.h"

Mips::Mips()
{
}

int Mips::getOpcodeValue(int binaryValue)
{

   return binaryValue >> 26;
}

int Mips::extractFunct(int value)
{
   bitset<32> binary(value);
   bitset<6> funct;  
   int j = 5;

   for (int i = 0; i < 6; i++)
   {
      funct.set(j, binary[5 - i]);
      j--;
   }

   return funct.to_ulong();
}

int Mips::extractShamt(int value)
{
   bitset<32> binary(value);

   bitset<5> shamt;  
   int j = 4;

   for (int i = 0; i < 5; i++)
   {
      shamt.set(j, binary[10 - i]);
      j--;
   }

   cout << "Shamt resultante : " << shamt << endl;

   return shamt.to_ulong();
}
