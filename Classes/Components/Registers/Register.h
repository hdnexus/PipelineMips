#ifndef REGISTER_H_INCLUDED
#define REGISTER_H_INCLUDED
#include <iostream>

using namespace std;

class Register
{
private:
  string name;
  int value;

public:
  Register(string name, int value);
  Register();
  ~Register();
  void setName(string name);
  string getName();
  void setValue(int value);
  int getValue();
  ~Register();
};

#endif
