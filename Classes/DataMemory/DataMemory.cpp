#include "./DataMemory.h"


DataMemory::DataMemory()
{
    memory = new int[512];
}

void DataMemory::write(int position, int value){
    if(position/4 < 128 && position/4 >= 0){
        memory[position/4] = value;
    }       
}

int DataMemory::get(int position){
     if(position/4 < 128 && position/4 >= 0)
         return this->memory[position/4];
}

DataMemory::~DataMemory()
{
    delete memory;
}

