#ifndef ALU_H_INCLUDED
#define ALU_H_INCLUDED
#include <iostream>
#include "../../Mips/Mips.h";

using namespace std;

class ALU
{
private:
  Mips mips;

public:
  ALU();
  ~ALU();
  int ALUOperation(unsigned int input1, unsigned int input2);
  int add(int a, int b);
};

#endif
