#ifndef DataMemory_H_INCLUDED
#define DataMemory_H_INCLUDED
#include <iostream>

using namespace std;

class DataMemory
{
private:
  int* memory;
public:
  DataMemory();
  ~DataMemory();
  void write(int positon, int value);
  int  get(int position);
};

#endif
