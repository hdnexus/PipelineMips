#include "ControlSignals.h"

ControlSignals::ControlSignals()
{
}

ControlSignals::~ControlSignals()
{
}

void ControlSignals::setControlSignals(int opcode, int funct)
{
  if (opcode == 0) //Tipo R
  {
    if (funct == 8) //jr
    {
      this->RegDst = 0;   // X - Não importa
      this->ALUSrc = 0;   // X - Não importa
      this->MemtoReg = 0; // X - Não importa
      this->RegWrite = 0;
      this->MemRead = 0; // X - Não importa
      this->MemWrite = 0;
      this->Branch = 0;         // X - Não importa
      this->BranchNotEqual = 0; // X - Não importa
      this->ALUOp1 = 1;         // X - Não importa. Deixei 1 porque é tipo R
      this->ALUOp0 = 0;         // X - Não importa. Deixei 0 porque é tipo R
      this->Jump = 1;
    }
    else //add, sub, and, or, slt, sll
    {
      this->RegDst = 1;
      this->ALUSrc = 0;
      this->MemtoReg = 0;
      this->RegWrite = 1;
      this->MemRead = 0;
      this->MemWrite = 0;
      this->Branch = 0;
      this->BranchNotEqual = 0;
      this->ALUOp1 = 1;
      this->ALUOp0 = 0;
      this->Jump = 0;
    }
  }

  if (opcode == 2) //j
  {
    this->RegDst = 0;   // X - Não importa
    this->ALUSrc = 0;   // X - Não importa
    this->MemtoReg = 0; // X - Não importa
    this->RegWrite = 0;
    this->MemRead = 0; // X - Não importa
    this->MemWrite = 0;
    this->Branch = 0;
    this->BranchNotEqual = 0;
    this->ALUOp1 = 0; // X - Não importa
    this->ALUOp0 = 0; // X - Não importa
    this->Jump = 1;
  }

  if (opcode == 3) //jal
  {
    this->RegDst = 0;   // X - Não importa
    this->ALUSrc = 0;   // X - Não importa
    this->MemtoReg = 0; // X - Não importa
    this->RegWrite = 1;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 0;
    this->BranchNotEqual = 0;
    this->ALUOp1 = 0; // X - Não importa
    this->ALUOp0 = 0; // X - Não importa
    this->Jump = 1;
  }

  if (opcode == 4) //beq - OK
  {
    this->RegDst = 0; // X - Não importa
    this->ALUSrc = 0;
    this->MemtoReg = 0; // X - Não importa
    this->RegWrite = 0;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 1;
    this->BranchNotEqual = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 1;
    this->Jump = 0;
  }

  if (opcode == 5) //bne
  {
    this->RegDst = 0; // X - Não importa
    this->ALUSrc = 0;
    this->MemtoReg = 0; // X - Não importa
    this->RegWrite = 0;
    this->MemRead = 0; // X - Não importa
    this->MemWrite = 0;
    this->Branch = 0;
    this->BranchNotEqual = 1;
    this->ALUOp1 = 0;
    this->ALUOp0 = 1;
    this->Jump = 0;
  }

  if (opcode == 8) //addi - OK
  {
    this->RegDst = 0;
    this->ALUSrc = 1;
    this->MemtoReg = 0;
    this->RegWrite = 1;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 0;
    this->BranchNotEqual = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
    this->Jump = 0;
  }

  if (opcode == 35) //lw - OK
  {
    this->RegDst = 0;
    this->ALUSrc = 1;
    this->MemtoReg = 1;
    this->RegWrite = 1;
    this->MemRead = 1;
    this->MemWrite = 0;
    this->Branch = 0;
    this->BranchNotEqual = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
    this->Jump = 0;
  }

  if (opcode == 43) //sw - OK
  {
    this->RegDst = 0; // X - Não importa
    this->ALUSrc = 1;
    this->MemtoReg = 0; // X - Não importa
    this->RegWrite = 0;
    this->MemRead = 0;
    this->MemWrite = 1;
    this->Branch = 0;
    this->BranchNotEqual = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
    this->Jump = 0;
  }
}
