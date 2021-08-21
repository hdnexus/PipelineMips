#include "./IF.h"

//construtor da classe
IF::IF() {}

//destrutor da classe
IF::~IF() {}

//função que executa o estágio IF
void IF::execute(PC pc, InstructionMemory instructionMemory, IF_ID *if_id)
{
    if_id->setInstruction(instructionMemory.getInstruction(pc.get()));
    if_id->setPcIncremented(pc.get() + 4);
}

/*
int IF::getCurrentInstruction()
{
    return this->if_id.getIstruction();
}

int IF::getCurrentPc()
{
    return this->if_id.getPcIncremented();
}
*/