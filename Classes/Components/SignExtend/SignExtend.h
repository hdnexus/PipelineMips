#ifndef SIGNEXTEND_H_INCLUDED
#define SIGNEXTEND_H_INCLUDED
#include <iostream>
#include <vector>
#include <fstream>
#include <bitset>

using namespace std;

class SignExtend
{
private:
public:
  SignExtend();
  ~SignExtend();
  bitset<32> ExtendingSign(int immediate);
};

#endif
