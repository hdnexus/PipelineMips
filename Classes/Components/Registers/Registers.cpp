#include "./Registers.h"

//construtor da classe
Registers::Registers()
{
    this->registers.resize(32);

    this->registers[0].setName("zero");
    this->registers[0].setValue(0);

    this->registers[16] = *new Register("s0", 6);
    this->registers[17] = *new Register("s1", 5);
    this->registers[18] = *new Register("s2", 1);
    this->registers[19] = *new Register("s3", 22);
    this->registers[20] = *new Register("s4", 21);
    this->registers[21] = *new Register("s5", 20);
    this->registers[22] = *new Register("s6", 19);
    this->registers[23] = *new Register("a2", 30);
}

//destrutor da classe
Registers::~Registers()
{
}

bool Registers::checkIfPositionExitsts(int position)
{
    return position > 0 && position <= 31;
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

bool Registers::writeRegister(int wrRegisterIndex, int value, string name, int regWrite)
{
    if (regWrite && this->checkIfPositionExitsts(wrRegisterIndex))
    {
        Register *reg = new Register(name, value);
        this->registers[wrRegisterIndex] = *reg;
        return true;
    }
    return false;
}

void Registers::printRegisters()
{
    cout << "Imprimindo banco de registradores" << endl;
    for (int i = 0; i < this->registers.size(); i++)
        cout << this->registers[i].getName() << " : " << this->registers[i].getValue() << endl;
}
