#ifndef ALU_H_INCLUDED
#define ALU_H_INCLUDED
#include <iostream>
#include "../../Mips/Mips.h"
#include "../ALUControl/ALUControl.h"

using namespace std;

class ALU
{
private:
  Mips mips;
  bool zero;

public:
  ALU();
  ~ALU();
  void setZero(bool value);
  bool getZero();
  int ALUOperation(int input1, int input2);
};

#endif
