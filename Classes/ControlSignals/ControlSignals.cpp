#include "ControlSignals.h"

ControlSignals::ControlSignals()
{
  this->RegDst = 0;
  this->Jump = 0;
  this->Branch = 0;
  this->MemRead = 0;
  this->MemtoReg = 0;
  this->ALUOp1 = 0;
  this->ALUOp0 = 0;
  this->MemWrite = 0;
  this->ALUSrc = 0;
  this->RegWrite = 0;
}

void ControlSignals::setControlSignals(unsigned int opcode)
{
  if (opcode == 0) //R format: add, sub, and, or and slt
  {
    this->RegDst = 1;
    this->ALUSrc = 0;
    this->MemtoReg = 0;
    this->RegWrite = 1;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 0;
    this->ALUOp1 = 1;
    this->ALUOp0 = 0;
    this->Jump = 0;
  }

  if (opcode == 4) ///beq
  {
    this->RegDst = 0; // X - Don't care
    this->Jump = 0;
    this->Branch = 1;
    this->MemRead = 0;
    this->MemtoReg = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 1;
    this->MemWrite = 0;
    this->ALUSrc = 0;
    this->RegWrite = 0;
  }

  if (opcode == 5) ///Tipo I BNE
  {
    this->RegDst = 0;
    this->Jump = 0;
    this->Branch = 0;
    this->MemRead = 0;
    this->MemtoReg = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 1;
    this->MemWrite = 0;
    this->ALUSrc = 1;
    this->RegWrite = 0;
  }

  if (opcode == 43) ///sw
  {
    this->RegDst = 0; //X - Don't care
    this->Jump = 0;
    this->Branch = 0;
    this->MemRead = 0;
    this->MemtoReg = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
    this->MemWrite = 1;
    this->ALUSrc = 1;
    this->RegWrite = 0;
  }

  if (opcode == 32) ///lw
  {
    this->RegDst = 0;
    this->ALUSrc = 1;
    this->MemtoReg = 1;
    this->RegWrite = 1;
    this->MemRead = 1;
    this->MemWrite = 0;
    this->Jump = 0;
    this->Branch = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
  }

  if (opcode == 8) ///Tipo I ADDI
  {
    this->RegDst = 0;
    this->Jump = 0;
    this->Branch = 0;
    this->MemRead = 0;
    this->MemtoReg = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
    this->MemWrite = 0;
    this->ALUSrc = 1;
    this->RegWrite = 1;
  }
  //Falta pra j, jr, jal e sll
}
