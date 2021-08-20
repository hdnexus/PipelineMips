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
  //Operação de branch///////////////////////////

  //////////////////////////////////////////////

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

  ///Parte do Load Word////////////////////////////////////////////////
  /*
  int readData = -1;
  int MemRead = ex_mem.controlSignal.MemRead;
  if(MemRead == 1)
  {
    readData = vamos ter que achar esse read data do datamemory;
  }
  */
  /////////////////////////////////////////////////////////////////////

  ///Parte para registrar os valores no registrador mem_wb/////////////
  //mem_wb->controlSignal = controlSignal;
  //mem_wb->aluResult = ex_mem.aluResult;
  //mem_wb->instruction = ex_mem.instruction;
  //mem_wb->wrIndex = ex_mem.wrIndex;
  //mem_wb->readData = readData;
  //////////////////////////////////////////////////////////////////
}