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
