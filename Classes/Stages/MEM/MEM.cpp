#include "./MEM.h"

//construtor da classe
MEM::MEM()
{
}

//destrutor da classe
MEM::~MEM()
{
}

//Tenta entender aonde o data memory encaixa nisso aqui
void MEM::execute(EX_MEM EX_MEM)
{
  /////////////////////////////////////////////////////////////////////
  //Operações de branch/////////////////////////////////////////////////
  /*
  int Branch = ex_mem.controlSignal.Branch;
  int BranchNotEqual = ex_mem.controlSignal.BranchNotEqual;
  if((Branch == 1 && ex_mem.aluZero ==1) || (BranchNotEqual == 1 && ex_mem.aluZero ==1))
  {
    PC = ex_mem.pcBranchIncremented;
    PCSrc = 1; 
    //Se o PCSrc = 0, PC = PC +4.
    //Se o PCSrc = 1, PC = PC + pcBranchIncremented.
  }
  A operação de Branch acaba aqui
  */
  ////////////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////////////
  ///Para Store Word////////////////////////////////////////////////////
  /*
  int MemWrite = ex_mem.controlSignal.MemWrite;
  if(MemWrite == 1)
  {
    Endereço do aluResult VAI RECEBER O VALOR DO rd2;
  }
  A operação do store word acaba aqui, ele nem entra no WB
  */
  /////////////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////////////
  ///Parte do Load Word////////////////////////////////////////////////
  /*
  int readData = -1;
  int MemRead = ex_mem.controlSignal.MemRead;
  if(MemRead == 1)
  {
    readData = read data do datamemory;
  }
  */
  /////////////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////////////
  ///Parte para registrar os valores no registrador mem_wb/////////////
  //mem_wb->controlSignal = controlSignal;
  //mem_wb->aluResult = ex_mem.aluResult;
  //mem_wb->instruction = ex_mem.instruction;
  //mem_wb->wrIndex = ex_mem.wrIndex;
  //mem_wb->readData = readData;
  //////////////////////////////////////////////////////////////////
}