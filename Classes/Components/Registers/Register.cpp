#include "Register.h"

//construtor da classe
Register::Register(string name, int value)
{
    this->name = name;
    this->value = value;
}

//construtor da classe
Register::Register()
{
}

//destrutor da classe
Register::~Register()
{
}

void Register::setName(string name)
{
    this->name = name;
}

string Register::getName()
{
    return this->name;
}

void Register::setValue(int value)
{
    this->value = value;
}

int Register::getValue()
{
    return this->value;
}

Register::~Register(){

};
