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
  int extractBits(int number, int startNumber, int numberOfBits);
  int extractBitsWithBitset(int number, int begin, int numberOfBits);
};

#endif
