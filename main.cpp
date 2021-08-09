#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

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

void menu()
{
  cout << "Trabalho de Organização de Computadores - Simulador de Pipeline" << endl
       << endl;
  cout << "Alunos: GABRIEL MARTINS QUINTANA VIEIRA MARQUES" << endl;
  cout << "        MATHEUS GOMES LUZ WERNECK" << endl;
  cout << "Professor: MARCELO LOBOSCO" << endl
       << endl;

  cout << "Seleciona o tipo do arquivo : " << endl;
  cout << "1 -> Arquivo TXT" << endl;
  cout << "2 -> Digitar pelo teclado os valores" << endl;

  int option = 0;
  cin >> option;
  if (option == 1){
    cout << "Digite o filename " << endl;
    string filename;
    cin >> filename;
    leArquivoTexto(filename);
  }

  /*cout << "Escolha uma opção para continuar:" << endl;
  cout << "1 -> Execução passo a passo" << endl;
  cout << "2 -> Execução direta" << endl;*/
}


void lePeloTeclado()
{
}

int main(int argc, char *argv[])
{
  menu();
}