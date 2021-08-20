#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <math.h>
#include "Classes/Util/Util.h"
#include "Classes/FileHandler/FileHandler.h"
#include "Classes/Mips/Mips.h"
#include "Classes/Components/InstructionMemory/InstructionMemory.h"
#include "Classes/Components/Registers/Registers.h"
#include "Classes/Components/ALU/ALU.h"
#include "Classes/Components/IF_ID/IF_ID.h"
#include "Classes/Components/DataMemory/DataMemory.h"

using namespace std;

void menu()
{
  cout << "Trabalho de Organização de Computadores - Simulador de Pipeline" << endl
       << endl;
  cout << "Alunos: GABRIEL MARTINS QUINTANA VIEIRA MARQUES" << endl;
  cout << "        MATHEUS GOMES LUZ WERNECK" << endl
       << endl;
  cout << "Professor: MARCELO LOBOSCO" << endl
       << endl;

  cout << "Seleciona o tipo do arquivo: " << endl;
  cout << "1 -> Arquivo TXT" << endl;
  cout << "2 -> Digitar pelo teclado os valores" << endl;
}

void lePeloTeclado()
{

  // if (option == 2)
  // {
  //   cout << "Opção escolhida - leitura pelo teclado" << endl;
  //   cout << "Digite as instrucoes: ";
  //   string instrucoes;
  //   cin >> instrucoes;
  //   cout << "Saida: " << endl;
  // }
}

void leArquivoTexto(string filename)
{
}

void inicializaMemoriaDeDados(DataMemory *dataMemory)
{
  FileHandler fileHandlerInstance;
  vector<int> data =   fileHandlerInstance.readMemDadosTxt("teste");

  for(int i = 0 ; i < data.size() ; i ++) 
    dataMemory->write(i + 4,data.at(i));

  //Imprime a memória de dados, a saída fica salva no txt "dataMemoryOut.txt"
  dataMemory->printDataMemory();
}

int main(int argc, char *argv[])
{
  DataMemory *dataMemory = new DataMemory();
  dataMemory->write(1,2);
  inicializaMemoriaDeDados(dataMemory);
  Registers bankOfRegisters;
  bankOfRegisters.printRegisters();
  InstructionMemory *im = new InstructionMemory(32);

  //Salva o que foi armazenado na memoria de instruções no txt 
  im->initializeInstructionMemory();

  //insereValTestesBe();
  /*
  menu();
  
  int option = 0;
  cin >> option;

  if (option == 1)
  {
    cout << "Opção escolhida - leitura por arquivo txt" << endl;
    cout << "Digite o filename: ";
    string filename;
    cin >> filename;
    cout << "Saida: " << endl;
    fileHandler.readFile(filename);
    Mips mips;
    cout << endl
         << "Valor do mips : " << mips.getOpcodeValue(8) << endl;
  }

  cout << "Escolha uma opção para continuar:" << endl;
  cout << "1 -> Execução passo a passo" << endl;
  cout << "2 -> Execução direta" << endl;

  int optionExec = 0;
  cin >> optionExec;
  if (optionExec == 1)
  {
    cout << "Opção escolhida - execução passo a passo" << endl;
  }

  if (option == 2)
  {
    cout << "Opção escolhida - execução direta" << endl;
  }
  */
}

//Codigos de teste

/*

    cout << "Opcode : " << mips.getOpcodeValue(577372164) << endl;
  cout << "Usando o extract : " << util.extractBits(577372164,0,6) << endl;
  cout << "Opcode 2 : " << mips.getOpcodeValue(134217985) << endl;
  cout << "Funct : " << mips.extractFunct(577372164) << endl;
  cout << "Shamt : " << mips.extractShamt(577372164) << endl;
  cout << "Shamt 2 : " << mips.extractShamt(577372292) << endl;


*/

/*
void TesteExtracaoBitwise()
{
  FileHandler fileHandler;
  Mips mips;
  Util util;
  InstructionMemory *Im = new InstructionMemory(100);

  int valTeste = 577372292;

  mips.extractFunct(valTeste);
  mips.extractShamt(valTeste);
  mips.extractRt(valTeste);
  mips.extractRd(valTeste);
  mips.extractRs(valTeste);

  Im->setInstruction(4, 8444);
  //cout << Im->getInstruction(4) << endl;
  cout << "Teste " << Im->getNumberOfInstructions() << endl;

  bitset<32> teste(-16);
  bitset<32> teste2(-4);
  cout << "Teste bitwise -16 :  " << teste << endl;
  cout << "Teste bitwise -4 :  " << teste2 << endl;
}
*/