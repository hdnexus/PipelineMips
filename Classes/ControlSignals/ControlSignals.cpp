#include "ControlSignals.h"

ControlSignals::ControlSignals()
{
  this->RegDst = 0;
  this->ALUSrc = 0;
  this->MemtoReg = 0;
  this->RegWrite = 0;
  this->MemRead = 0;
  this->MemWrite = 0;
  this->Branch = 0;
  this->ALUOp1 = 0;
  this->ALUOp0 = 0;
  this->Jump = 0;
}

void ControlSignals::setControlSignals(int opcode)
{
  if (opcode == 0) //R format: add, sub, and, or, slt, sll, jr - OK
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

  if (opcode == 2) //j
  {
    this->RegDst = 0;   // X - Don't care
    this->ALUSrc = 0;   // X - Don't care
    this->MemtoReg = 0; // X - Don't care
    this->RegWrite = 0;
    this->MemRead = 0; // X - Don't care
    this->MemWrite = 0;
    this->Branch = 0;
    this->ALUOp1 = 0; // X - Don't care
    this->ALUOp0 = 0; // X - Don't care
    this->Jump = 1;
  }

  if (opcode == 3) //jal
  {
    this->RegDst = 0;   // X - Don't care
    this->ALUSrc = 0;   // X - Don't care
    this->MemtoReg = 0; // X - Don't care
    this->RegWrite = 1;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 0;
    this->ALUOp1 = 0; // X - Don't care
    this->ALUOp0 = 0; // X - Don't care
    this->Jump = 1;
  }

  if (opcode == 4) //beq - OK
  {
    this->RegDst = 0; // X - Don't care
    this->ALUSrc = 0;
    this->MemtoReg = 0; // X - Don't care
    this->RegWrite = 0;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 1;
    this->ALUOp1 = 0;
    this->ALUOp0 = 1;
    this->Jump = 0;
  }

  if (opcode == 5) //bne - Não tenho certeza
  {
    this->RegDst = 0; // X - Don't care
    this->ALUSrc = 0;
    this->MemtoReg = 0; // X - Don't care
    this->RegWrite = 0;
    this->MemRead = 0;
    this->MemWrite = 0;
    this->Branch = 1;
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
    this->Jump = 0;
    this->Branch = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
  }

  if (opcode == 43) //sw - OK
  {
    this->RegDst = 0; // X - Don't care
    this->ALUSrc = 1;
    this->MemtoReg = 0; // X - Don't care
    this->RegWrite = 0;
    this->MemRead = 0;
    this->MemWrite = 1;
    this->Branch = 0;
    this->ALUOp1 = 0;
    this->ALUOp0 = 0;
    this->Jump = 0;
  }
}
