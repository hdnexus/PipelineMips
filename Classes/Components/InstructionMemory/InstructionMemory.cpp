#include "./InstructionMemory.h"

//construtor da classe
InstructionMemory::InstructionMemory(int memorySize)
{
    this->instructionMemory = new int[memorySize];
}

void InstructionMemory::setInstruction(int index, unsigned int instruction)
{

    this->instructionMemory[index / 4] = instruction;
    this->numberOfInstructions++;
}

int InstructionMemory::getInstruction(int index)
{
    return this->instructionMemory[index / 4];
}

int InstructionMemory::getNumberOfInstructions()
{
    return this->numberOfInstructions;
}

//destrutor da classe
InstructionMemory::~InstructionMemory()
{
    delete instructionMemory;
}