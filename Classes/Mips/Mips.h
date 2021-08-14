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
  int getOpcodeValue(int binaryValue);
  int extractRs(int value);
  int extractRt(int value);
  int extractRd(int value);
  int extractShamt(int value);
  int extractFunct(int value);
};

#endif
