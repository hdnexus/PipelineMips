#include "./InstructionMemory.h"

//construtor da classe
InstructionMemory::InstructionMemory(int memorySize)
{
    this->instructionMemory.resize(memorySize);
}

void InstructionMemory::setInstruction(int index,  int instruction)
{

    this->instructionMemory[index / 4] = *new Instruction(instruction);
    this->numberOfInstructions++;
}

Instruction InstructionMemory::getInstruction(int index)
{
    return this->instructionMemory[index / 4];
}

int InstructionMemory::getNumberOfInstructions()
{
    return this->numberOfInstructions;
}


InstructionMemory::~InstructionMemory()
{
   //Desalocar o vector
}