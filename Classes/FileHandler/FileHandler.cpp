#include "./FileHandler.h"

//construtor da classe
FileHandler::FileHandler()
{
}

//destrutor da classe
FileHandler::~FileHandler()
{
}

vector<string> FileHandler::readFile(string filename)
{
   vector<string> binaryLines;

   ifstream arq(filename);

   string linha;
   if (arq.is_open())
   {
      while (!arq.eof())
      {
         getline(arq, linha);
         binaryLines.push_back(linha);
         cout << linha << endl;
      }

      arq.close();
      return binaryLines;
   }

   else
      cout << "Arquivo de texto não encontrdo";

   return binaryLines;
}

vector<int> FileHandler::readMemDadosTxt(string filename)
{
   string filePathDefault = "./inputs/memDados.txt";

   vector<int> memValue;

   ifstream arq(filePathDefault);

   string linha;
   if (arq.is_open())
   {
      while (!arq.eof())
      {
         getline(arq, linha);
         cout << "Linha : " << linha << endl;
         memValue.push_back(stoi(linha));
      }

      arq.close();
      return memValue;
   }

   else
      cout << "Arquivo de texto não encontrdo";

   return memValue;
}
