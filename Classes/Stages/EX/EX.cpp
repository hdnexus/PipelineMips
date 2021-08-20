#include "./EX.h"

//construtor da classe
EX::EX()
{
}

//destrutor da classe
EX::~EX()
{
}

void EX::execute(ID_EX id_ex)
{

    Util util;
    int aluResult;
    int aluSrc = id_ex.controlSignal.ALUSrc;
    if(aluSrc == 1){
        aluResult = this->alu.ALUOperation(id_ex.rd1.getValue(),util.binaryStringToInt(id_ex.signExtend.to_string()));
    }
    else if(aluSrc == 0){
        aluResult = this->alu.ALUOperation(id_ex.rd1.getValue(),id_ex.rd2.getValue());
    }
}