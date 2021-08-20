#ifndef DataMemory_H_INCLUDED
#define DataMemory_H_INCLUDED
#include <iostream>
#include <fstream>

using namespace std;

class DataMemory
{
private:
  int *memory;
  int usedSize;

public:
  DataMemory();
  ~DataMemory();
  void write(int positon, int value);
  int get(int position);
  void printDataMemory();

};

#endif
