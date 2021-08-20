#ifndef ALUCONTROL_H_INCLUDED
#define ALUCONTROL_H_INCLUDED
#include <iostream>

using namespace std;

class ALUControl
{
private:
  bool ALUOp1;
  bool ALUOp0;

public:
  ALUControl();
  string Output(int funct);
  void SetALU(bool ALUOp1, bool ALUOp0);
};

#endif
