#include "./IF.h"

//construtor da classe
IF::IF(){}

void IF::execute(PC pc,InstructionMemory instructionMemory){
    this->if_id.setInstruction(instructionMemory.getInstruction(pc.get()));
    this->if_id.setPcIncremented(pc.get() + 4);
}

int IF::getCurrentInstruction(){
    return this->if_id.getIstruction();
}

int IF::getCurrentPc(){
    return this->if_id.getPcIncremented();
}

//destrutor da classe
IF::~IF(){}