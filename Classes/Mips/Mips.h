#ifndef MIPS_H_INCLUDED
#define MIPS_H_INCLUDED
#include <iostream>
#include <vector>
#include <fstream>
#include <bitset>
#include "../Util/Util.h"

using namespace std;

class Mips
{
private:

public:
  Mips();
  unsigned int getOpcodeValue(int binaryValue);
  unsigned int extractRs(int value);
  unsigned int extractRt(int value);
  unsigned int extractRd(int value);
  unsigned int extractShamt(int value);
  unsigned int extractFunct(int value);
  unsigned int extractAddress(int value);
  int extractImmediate(int value);
};

#endif
