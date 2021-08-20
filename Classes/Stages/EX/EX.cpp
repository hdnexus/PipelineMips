#include "./EX.h"

//construtor da classe
EX::EX()
{
}

//destrutor da classe
EX::~EX()
{
}

void EX::execute(ID_EX id_ex)
{

  Util util;

  ///Parte para pegar o resultado da operação da ALU////////////////////
  string AluControl; //Precisamos pegar esse alucontrol

  //ver como pegar esse instrução.funct
  //ALUControl = AluControl.Output(instrução.funct,id_ex.controlSignal.AluOp1, id_ex.controlSignal.AluOp0)

  int aluSrc = id_ex.controlSignal.ALUSrc; //responsavel por decidir qual valor vai ser utilizado como input na ALU
  int aluResult;                           //valor do resultado da ALU
  if (aluSrc == 1)                         //Usaremos o segundo input como o immediate extendido
  {
    aluResult = this->alu.ALUOperation(id_ex.rd1.getValue(), util.binaryStringToInt(id_ex.signExtend.to_string()), AluControl);
  }
  else if (aluSrc == 0) //Usaremos o segundo input como o read data 2
  {
    aluResult = this->alu.ALUOperation(id_ex.rd1.getValue(), id_ex.rd2.getValue(), AluControl);
  }
  ////////////////////////////////////////////////////////////////////

  ///Parte para realizar o add com shift left////////////////////////
  //algo assim, tem que ver o pcIncremente e o shiftLeft
  //int pcBranchIncremented = id_ex.pcIncremented + util.binaryStringToInt(id_ex.signExtend.to_string())).shiftLeft();
  //Ou usa a função do componente de shift left, ou usa o <<2
  //////////////////////////////////////////////////////////////////

  ///Parte para pegar o Write Register wrIndex///////////////////////
  /*
   int RegDst = id_ex.controlSignal.RegDst; 
   int wrIndex; //não sei se isso é int
   if(RegDst == 1)
   {
     wrIndex = Instruction.rd; //esse rd não é read data, é aquele treco de rs,rt,rd,funct...
   }
   else if(RegDst == 0)
   {
     wrIndex = Instruction.rt;
   }
  */
  //////////////////////////////////////////////////////////////////

  ///Parte para registrar os valores no registrador ex_mem/////////////
  //ex_mem->controlSignal = controlSignal;
  //ex_mem->aluZero = alu.getZero();
  //ex_mem->aluResult = aluResult;
  //ex_mem->rd2 = id_ex.rd2;
  //ex_mem->pcBranchIncremented = pcBranchIncremented;
  //ex_mem->instruction = instruction;
  //ex_mem->wrIndex = wrIndex;
  //////////////////////////////////////////////////////////////////
}