#ifndef PIPELINESIMULATOR_H_INCLUDED
#define PIPELINESIMULATOR_H_INCLUDED
#include <iostream>

using namespace std;

class PipelineSimulator
{
private:
public:
  PipelineSimulator();
  ~PipelineSimulator();
  void startDirectSimulation();
  void startStepSimulation();
};

#endif
