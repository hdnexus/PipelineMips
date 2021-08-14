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
  unsigned int extractBits(unsigned int number,unsigned int  startNumber,unsigned int numberOfBits);
  unsigned int extractBitsWithBitset(unsigned int number,unsigned int begin, unsigned int numberOfBits);

};

#endif
