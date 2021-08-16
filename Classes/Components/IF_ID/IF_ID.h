#ifndef IF_ID_H_INCLUDED
#define IF_ID_H_INCLUDED
#include <iostream>

using namespace std;

class IF_ID
{
private:
  int pcIncremented;
  int instruction;

public:
  IF_ID(){}
  ~IF_ID(){}
   void setInstruction(int instruction){
       this->instruction = instruction;
   }
   void setPcIncremented(int value){
       this->pcIncremented = value;
   }

   int getPcIncremented(){
       return this->pcIncremented;
   }

   int getIstruction(){
       return this->instruction;
   }

};

#endif
