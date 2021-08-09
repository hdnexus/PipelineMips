#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void menu()
{
  cout << "Trabalho de Organização de Computadores - Simulador de Pipeline" << endl
       << endl;
  cout << "Alunos: GABRIEL MARTINS QUINTANA VIEIRA MARQUES" << endl;
  cout << "        MATHEUS GOMES LUZ WERNECK" << endl;
  cout << "Professor: MARCELO LOBOSCO" << endl
       << endl;

  cout << "Escolha uma opção para continuar:" << endl;
  cout << "1 -> Execução passo a passo" << endl;
  cout << "2 -> Execução direta" << endl;
}

int main(int argc, char *argv[])
{
  menu();
}