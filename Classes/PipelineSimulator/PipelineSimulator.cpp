#include "./PipelineSimulator.h"

//construtor da classe
PipelineSimulator::PipelineSimulator(InstructionMemory *instructionMemory, DataMemory *dataMemory, Registers *bankOfRegisters)
{
  this->pc.set(0);
  this->instructionMemory = instructionMemory;
  this->dataMemory = dataMemory;
  //this->bankOfRegisters = bankOfRegisters;
}

//destrutor da classe
PipelineSimulator::~PipelineSimulator()
{
}
void PipelineSimulator::startDirectSimulation()
{

  InstructionMemory *IM = new InstructionMemory(32);
  int clock = 0;

  while (this->pc.get() < 128)
  {

    if (clock >= 4)
    {
      //this->wb_stage.execute();
      //printInformation(clock, instrução, etc...); //printa informações do clock
    }
    if (clock >= 3)
    {
      //this->mem_stage.execute();
      //printInformation(clock, instrução, etc...); //printa informações do clock
    }
    if (clock >= 2)
    {
      //this->ex_stage.execute();
      //printInformation(clock, instrução, etc...); //printa informações do clock
    }
    if (clock >= 1)
    {
      //this->id_stage.execute();
      //printInformation(clock, instrução, etc...); //printa informações do clock
    }
    if (clock >= 0)
    {
      this->if_stage.execute(this->pc, *this->instructionMemory, &this->if_id);
      //printInformation(clock, instrução, etc...); //printa informações do clock
    }
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