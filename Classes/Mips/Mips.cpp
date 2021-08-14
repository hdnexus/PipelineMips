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
   cout << "Bin que recebe : " << binary[1] << endl;
   bitset<6> funct;

   for (int i = 0; i < 6; i++){
        funct[i+1] = binary[27 + i];
        cout << "Valor no indice " << 27+i << " : " << binary[27+i] << endl;
   }
    


   cout << "Funct : " << funct << endl;
   return funct.to_ulong();
}

int Mips::extractShamt(int value)
{
   bitset<32> binary(value);
   bitset<5> shamt;

   for (int i = 0; i < 5; i++)
      shamt[i] = binary[25 - i];

   return shamt.to_ulong();
}