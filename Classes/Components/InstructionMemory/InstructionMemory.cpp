#include "./InstructionMemory.h"

//construtor da classe
InstructionMemory::InstructionMemory(int memorySize)
{
    this->instructionMemory.resize(memorySize);
}

void InstructionMemory::setInstruction(int index, int instruction)
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

void InstructionMemory::initializeInstructionMemory(){
    FileHandler fileHandler;
    vector<int> instructions = fileHandler.readMemInstrucoesTxt();

    for(int i = 0 ; i < instructions.size() ; i ++){
        this->setInstruction(i/4,instructions.at(i));
    }

    printMemory();

}

void InstructionMemory::printMemory(){
    ofstream saida("instructionMemoryOut.txt",ofstream::out);

    saida << "Imprimindo mem de instruções : " << endl;
    for(int i = 0 ; i < this->numberOfInstructions ; i++)
        saida << "Instrução, tipo :  " << this->instructionMemory.at(i/4).type << endl;

}

InstructionMemory::~InstructionMemory()
{
    //Desalocar o vector
}