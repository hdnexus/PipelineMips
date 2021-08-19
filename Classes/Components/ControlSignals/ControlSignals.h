#ifndef CONTROLSIGNALS_H_INCLUDED
#define CONTROLSIGNALS_H_INCLUDED
#include <iostream>

using namespace std;

class ControlSignals
{
private:
public:
  bool RegDst = 0;
  bool ALUSrc = 0;
  bool MemtoReg = 0;
  bool RegWrite = 0;
  bool MemRead = 0;
  bool MemWrite = 0;
  bool Branch = 0;
  bool BranchNotEqual = 0;
  bool ALUOp1 = 0;
  bool ALUOp0 = 0;
  bool Jump = 0;

  ControlSignals();
  ~ControlSignals();

  void setControlSignals(int opcode, int funct);
};

#endif
