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

//Função que ira realizar a simulação direta do pipeline
void PipelineSimulator::startDirectSimulation()
{

  InstructionMemory *IM = new InstructionMemory(32);
  int clock = 1;

  while (this->pc.get() < 128)
  {

    if (clock >= 5)
    {
      //this->wb_stage.execute();
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }
    if (clock >= 4)
    {
      //this->mem_stage.execute();
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }
    if (clock >= 3)
    {
      //this->ex_stage.execute();
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }
    if (clock >= 2)
    {
      this->id_stage.execute(this->if_id.getIstruction(), this->bankOfRegisters, &this->id_ex, this->if_id.getPcIncremented());
      //printInformation(clock, instrução, estagio, estagio, etc...); //printa informações do clock
    }
    if (clock >= 1)
    {
      this->if_stage.execute(this->pc, *this->instructionMemory, &this->if_id);
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }
    clock++;
  }
}

//Função que ira realizar a simulação passo a passo do pipeline
void PipelineSimulator::startStepSimulation()
{
  /*
  clock = 0;
  while(PC < 128)
  {
     if (clock >= 5)
    {
      //this->wb_stage.execute();
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }

    //Inserir aqui uma função e um cout que irá pedir para o usuario
    //digitar uma tecla para continuar!

    if (clock >= 4)
    {
      //this->mem_stage.execute();
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }

    //Inserir aqui uma função e um cout que irá pedir para o usuario
    //digitar uma tecla para continuar!

    if (clock >= 3)
    {
      //this->ex_stage.execute();
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }

    //Inserir aqui uma função e um cout que irá pedir para o usuario
    //digitar uma tecla para continuar!

    if (clock >= 2)
    {
      this->id_stage.execute(this->if_id.getIstruction(), this->bankOfRegisters, &this->id_ex, this->if_id.getPcIncremented());
      //printInformation(clock, instrução, estagio, estagio, etc...); //printa informações do clock
    }

    //Inserir aqui uma função e um cout que irá pedir para o usuario
    //digitar uma tecla para continuar!


    if (clock >= 1)
    {
      this->if_stage.execute(this->pc, *this->instructionMemory, &this->if_id);
      //printInformation(clock, instrução, estagio, etc...); //printa informações do clock
    }

    //Inserir aqui uma função e um cout que irá pedir para o usuario
    //digitar uma tecla para continuar!
    clock++;
  }
  */
}