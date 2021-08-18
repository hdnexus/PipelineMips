#include "./PipelineSimulator.h"

//construtor da classe
PipelineSimulator::PipelineSimulator(InstructionMemory *instructionMemory, DataMemory *dataMemory, Registers *bankOfRegisters)
{
  this->pc.set(0);
  this->instructionMemory = instructionMemory;
  this->dataMemory = dataMemory;
  this->bankOfRegisters = bankOfRegisters;
}

//destrutor da classe
PipelineSimulator::~PipelineSimulator()
{
}
void PipelineSimulator::startDirectSimulation()
{

  InstructionMemory *IM = new InstructionMemory(32);
  int clock = 1;

  while (this->pc.get() < 128)
  {
    this->if_stage.execute(this->pc,*this->instructionMemory,&this->if_id); 

    if(clock > 1)    
      this->id_stage.execute();

    //Faz o estagio IF
    /*
    printInformation(clock, instrução, etc...); //printa informações do clock

    ID.doID(); //Faz o estagio ID
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock

    EX.doEX(); //Faz o estagio EX
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock

    MEM.doMEM(); //Faz o estagio MEM
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock

    WB.doWB(); //Faz o estagio WB 
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock
    */

   clock++;
  }
}

void PipelineSimulator::startStepSimulation()
{
  /*
  clock = 0;
  while(PC < 128)
  {
    IF.doIF(); //Faz o estagio IF
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock
    
    apertar botão para continuar
    ID.doID(); //Faz o estagio ID
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock
    
    apertar botão para continuar
    EX.doEX(); //Faz o estagio EX
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock
    
    apertar botão para continuar
    MEM.doMEM(); //Faz o estagio MEM
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock
  
    apertar botão para continuar
    WB.doWB(); //Faz o estagio WB 
    clock++;
    printInformation(clock, instrução, etc...); //printa informações do clock
  }
  */
}