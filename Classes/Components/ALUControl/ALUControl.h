#ifndef ALUCONTROL_H_INCLUDED
#define ALUCONTROL_H_INCLUDED
#include <iostream>

using namespace std;

class ALUControl
{
private:
  bool ALUOp1; //controle de sinal ALUOp1
  bool ALUOp0; //controle de sinal ALUOp0

public:
  ALUControl();                                       //construtor da classe
  ~ALUControl();                                      //destrutor da classe
  string Output(int funct, bool ALUOp1, bool ALUOp0); //operação do ALUControl
};

#endif
