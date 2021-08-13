#ifndef SIGNEXTEND_H_INCLUDED
#define SIGNEXTEND_H_INCLUDED
#include <iostream>

using namespace std;

class SignExtend
{
private:
public:
  SignExtend();
  ~SignExtend();
  unsigned int ExtendingSign(unsigned int sign);
};

#endif
