#include "./Mips.h"

//construtor da classe
Mips::Mips()
{
}

//destrutor da classe
Mips::~Mips()
{
}

unsigned int Mips::getOpcodeValue(int binaryValue)
{
   return binaryValue >> 26;
}

unsigned int Mips::extractFunct(int value)
{
   bitset<32> binary(value);
   bitset<6> funct;
   int j = 5;

   for (int i = 0; i < 6; i++)
   {
      funct.set(j, binary[5 - i]);
      j--;
   }

   cout << "Funct resultante : " << funct << endl;

   return funct.to_ulong();
}

unsigned int Mips::extractShamt(int value)
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

unsigned int Mips::extractRd(int value)
{
   bitset<32> binary(value);

   bitset<5> rd;
   int j = 4;

   for (int i = 0; i < 5; i++)
   {
      rd.set(j, binary[15 - i]);
      j--;
   }

   cout << "rd resultante : " << rd << endl;

   return rd.to_ulong();
}

unsigned int Mips::extractRt(int value)
{
   bitset<32> binary(value);

   bitset<5> rt;
   int j = 4;

   for (int i = 0; i < 5; i++)
   {
      rt.set(j, binary[20 - i]);
      j--;
   }

   cout << "Rt resultante : " << rt << endl;

   return rt.to_ulong();
}

unsigned int Mips::extractRs(int value)
{
   bitset<32> binary(value);

   bitset<5> rs;
   int j = 4;

   for (int i = 0; i < 5; i++)
   {
      rs.set(j, binary[25 - i]);
      j--;
   }

   cout << "rs resultante : " << rs << endl;

   return rs.to_ulong();
}

unsigned int Mips::extractAddress(int value)
{
   bitset<32> binary(value);

   bitset<26> address;
   int j = 25;

   for (int i = 0; i < 26; i++)
   {
      address.set(j, binary[25 - i]);
      j--;
   }

   cout << "adress resultante : " << address << endl;

   return address.to_ulong();
}

int Mips::extractImmediate(int value)
{
   Util util;
   bitset<32> binary(value);

   bitset<16> immediate;
   int j = 15;

   for (int i = 0; i < 26; i++)
   {
      immediate.set(j, binary[15 - i]);
      j--;
   }

   cout << "immediate resultante : " << immediate << endl;

   return util.binaryStringToInt(immediate.to_string());
}
