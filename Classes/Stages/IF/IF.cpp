#include "./IF.h"

//construtor da classe
IF::IF() {}

//destrutor da classe
IF::~IF() {}

void IF::execute(PC pc, InstructionMemory instructionMemory)
{
    this->if_id.setInstruction(instructionMemory.getInstruction(pc.get()));
    this->if_id.setPcIncremented(pc.get() + 4);
}
