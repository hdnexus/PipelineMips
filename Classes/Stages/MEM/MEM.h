#ifndef MEM_H_INCLUDED
#define MEM_H_INCLUDED
#include <iostream>
#include "../../Components/EX_MEM/EX_MEM.h"
using namespace std;

class MEM
{
private:
public:
  MEM();
  ~MEM();
  void execute(EX_MEM ex_mem);
};

#endif
