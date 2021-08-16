#ifndef PC_H_INCLUDED
#define PC_H_INCLUDED
#include <iostream>

using namespace std;

class PC
{
private:
  int instructionAddrress;

public:
  PC(){}
  ~PC(){}
  int get(){
    return this->instructionAddrress;
  }
  void set(int address){
    this->instructionAddrress = address;
  }
};

#endif
