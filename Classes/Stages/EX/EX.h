#ifndef EX_H_INCLUDED
#define EX_H_INCLUDED
#include <iostream>
#include "../../Components/ID_EX/ID_EX.h"
#include "../../Components/ALU/ALU.h"
#include "../../Components/ALUControl/ALUControl.h"
#include "../../Components/ShiftLeft/ShiftLeft.h"
#include "../../Util/Util.h"

using namespace std;

class EX
{
private:
  ALU alu;
  ALUControl aluControl;
  ShiftLeft shiftLeft;

public:
  EX();
  ~EX();
  void execute(ID_EX id_ex);
};

#endif
