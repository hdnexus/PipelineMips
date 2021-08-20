#ifndef WB_H_INCLUDED
#define WB_H_INCLUDED
#include <iostream>
#include "../../Components/MEM_WB/MEM_WB.h"
using namespace std;

class WB
{
private:
public:
  WB();
  ~WB();
  void execute(MEM_WB mem_wb);
};

#endif
