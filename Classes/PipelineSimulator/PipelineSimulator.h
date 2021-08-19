#ifndef PIPELINESIMULATOR_H_INCLUDED
#define PIPELINESIMULATOR_H_INCLUDED
#include <iostream>
#include "../Components/IF_ID/IF_ID.h"
#include "../Components/PC/PC.h"
#include "../Stages/IF/IF.h"
#include "../Stages/ID/ID.h"
#include "../Stages/EX/EX.h"
#include "../Stages/MEM/MEM.h"
#include "../Stages/WB/WB.h"
#include "../Components/InstructionMemory/InstructionMemory.h"
#include "../Components/DataMemory/DataMemory.h"
#include "../Components/Registers/Registers.h"

using namespace std;

class PipelineSimulator
{

private:
  IF_ID if_id;
  IF if_stage;
  ID id_stage;
  EX ex_stage;
  MEM mem_stage;
  WB wb_stage;
  PC pc;
  InstructionMemory *instructionMemory;
  DataMemory *dataMemory;
  Registers *bankOfRegisters;

public:
  PipelineSimulator(
      InstructionMemory *instructionMemory,
      DataMemory *dataMemory,
      Registers *bankOfRegisters);
  ~PipelineSimulator();
  void startDirectSimulation();
  void startStepSimulation();
};

#endif
