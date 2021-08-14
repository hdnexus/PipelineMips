#ifndef DataMemory_H_INCLUDED
#define DataMemory_H_INCLUDED
#include <iostream>

using namespace std;

class DataMemory
{
private:
  unsigned int* memory;
public:
  DataMemory();
  ~DataMemory();
};

#endif
