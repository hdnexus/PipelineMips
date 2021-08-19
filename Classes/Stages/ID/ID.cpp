#include "./ID.h"


ID::ID(){}

void ID::execute(Instruction instruction,Registers *bankOfRegisters,ID_EX *id_ex){
    //bankOfRegisters
    ControlSignals controlSignal;
    Register r1,r2;

    controlSignal.setControlSignals(instruction.opcode,instruction.funct);
    bitset<32> immediateExtended = this->signExtend.ExtendingSign(instruction.immediate);
    bankOfRegisters->readRegister(instruction.rs,instruction.rt,&r1,&r2);
    
    id_ex->controlSignal = controlSignal;
    id_ex->funct = instruction.funct;
    id_ex->shamt = instruction.shamt;
    id_ex->signExtend = immediateExtended;
    id_ex->rd1 = r1;
    id_ex->rd2 = r2;

}

ID::~ID(){}