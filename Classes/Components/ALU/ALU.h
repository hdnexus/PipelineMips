#ifndef ALU_H_INCLUDED
#define ALU_H_INCLUDED
#include <iostream>

using namespace std;

class ALU
{
private:
public:
  ALU();
  ~ALU();
  int ALUOperation(unsigned int input1, unsigned int input2);
};

#endif
