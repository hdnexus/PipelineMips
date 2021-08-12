#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <math.h>
#include "Classes/Util/Util.h"
#include "Classes/FileHandler/FileHandler.h"
#include "Classes/Mips/Mips.h"

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

int main(int argc, char *argv[])
{
  FileHandler fileHandler;

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
}