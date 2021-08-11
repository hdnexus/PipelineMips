#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <math.h>
#include "Classes/Util/Util.h"

using namespace std;

void leArquivoTexto(string filename)
{
  ifstream arq(filename);
  string linha;
  if (arq.is_open())
  {
    //Vai ate o final do arquivo separando cada elemento do csv por ,
    while (!arq.eof())
    {
      getline(arq, linha);
      cout << linha << endl;
    }
  }
  arq.close();
}

int binaryStringToInt(string binary){
  
    return stoi(binary,0,2);   
}


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

  int option = 0;
  cin >> option;
  if (option == 1)
  {
    cout << "Opção escolhida - leitura por arquivo txt" << endl;
    cout << "Digite o filename: ";
    string filename;
    cin >> filename;
    cout << "Saida: " << endl;
    leArquivoTexto(filename);
  }

  if (option == 2)
  {
    cout << "Opção escolhida - leitura pelo teclado" << endl;
    cout << "Digite as instrucoes: ";
    string instrucoes;
    cin >> instrucoes;
    cout << "Saida: " << endl;
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

void lePeloTeclado()
{
}

int main(int argc, char *argv[])
{
  //menu();

  Util util;
  string stringA = "1111";
  cout << util.binaryStringToInt(stringA);  
}