#include "./Registers.h"

//construtor da classe
Registers::Registers()
{
    this->registers.resize(32);
}

bool Registers::checkIfPositionExitsts(int position){
    return position >= 0 && position <= 31;
}

bool Registers::readRegister(
    int registers1pos,
    int registers2pos,
    Register *readData1,
    Register *readData2)
{
    if (this->checkIfPositionExitsts(registers1pos) && this->checkIfPositionExitsts(registers2pos))
    {
        *readData1 = this->registers.at(registers1pos);
        *readData2 = this->registers.at(registers2pos);
        return true;
    }

    return false;
}

bool Registers::writeRegister(int wrRegisterIndex,int value,string name,int regWrite){
    if(regWrite && this->checkIfPositionExitsts(wrRegisterIndex)){
        Register* reg = new Register(name,value);
        this->registers[wrRegisterIndex] = *reg;
        return true;
    }
    return false;
}

void Registers::printRegisters(){
    cout << "Imprimindo banco de registradores" << endl;
    for(int i = 0 ; i < this->registers.size() ; i++)
        cout << this->registers[i].getName() << endl;
}


//destrutor da classe
Registers::~Registers()
{
}
