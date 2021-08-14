#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED
#include <iostream>
#include <fstream>

using namespace std;

class Util
{
private:
public:
  Util();
  int binaryStringToInt(string binary);
  unsigned int extractBits(uint32_t number,int startNumber, int numberOfBits);
};

#endif
