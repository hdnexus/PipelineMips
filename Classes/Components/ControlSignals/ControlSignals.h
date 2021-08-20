#ifndef CONTROLSIGNALS_H_INCLUDED
#define CONTROLSIGNALS_H_INCLUDED
#include <iostream>

using namespace std;

class ControlSignals
{
private:
public:
  bool RegDst = 0;         //qual campo para funcionar de write register
  bool ALUSrc = 0;         //fonte para a segunda entrada ALU
  bool MemtoReg = 0;       //esta ligado com o write register data input
  bool RegWrite = 0;       //write to register file
  bool MemRead = 0;        //ler o endereço de entrada da memória
  bool MemWrite = 0;       //escrever o endereço de entrada/dados na memória
  bool Branch = 0;         //sinal de instrução branch equal
  bool BranchNotEqual = 0; //sinal de instrução branch not equal
  bool ALUOp1 = 0;         //Inputs que determinam a operação realiza na ALU
  bool ALUOp0 = 0;         //Inputs que determinam a operação realizada na ALU
  bool Jump = 0;           //sinal de instrução jump

  ControlSignals();
  ~ControlSignals();

  void setControlSignals(int opcode, int funct);
};

#endif
