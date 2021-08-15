#ifndef REGISTERS_H_INCLUDED
#define REGISTERS_H_INCLUDED
#include <iostream>
#include "Register.h"
#include <vector>

using namespace std;

class Registers
{
private:
  vector<Register> registers;
public:
  Registers();
  ~Registers();
  bool readRegister(int registers1pos,int registers2pos,Register* readData1,Register* readData2);
  bool writeRegister(int wrRegisterIndex,int value,string name,int regWrite);
  bool checkIfPositionExitsts(int position);
  void printRegisters();

};

#endif
