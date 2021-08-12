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
  bitset<6> getOpcodeValue(int binaryValue);
};

#endif
