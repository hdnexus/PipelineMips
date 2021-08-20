#include "./DataMemory.h"

DataMemory::DataMemory()
{
    memory = new int[128];
}

void DataMemory::write(int position, int value)
{
    if (position / 4 < 128 && position / 4 >= 0)
    {
        memory[position / 4] = value;
        this->usedSize++;
    }
}

int DataMemory::get(int position)
{
    if (position / 4 < 128 && position / 4 >= 0)
        return this->memory[position / 4];
}

void DataMemory::printDataMemory()
{
    ofstream dataMemoryOut("dataMemoryOut.txt", ofstream::out);
    dataMemoryOut << "Imprimindo mem de dados : " << endl;
    for (int i = 0; i < this->usedSize; i++)
        dataMemoryOut << "Posição : " << i << " - Valor : " << this->memory[i] << endl;
}

DataMemory::~DataMemory()
{
    delete memory;
}
