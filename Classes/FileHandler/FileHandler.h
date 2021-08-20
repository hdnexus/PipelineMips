#ifndef FILEHANDLER_H_INCLUDED
#define FILEHANDLER_H_INCLUDED
#include <iostream>
#include <vector>
#include <fstream>
#include "../Util/Util.h"

using namespace std;

class FileHandler
{
private:
public:
  FileHandler();
  ~FileHandler();
  vector<string> readFile(string filename);
  vector<int> readMemDadosTxt(string filename);
  vector<int> readMemInstrucoesTxt();
};

#endif
