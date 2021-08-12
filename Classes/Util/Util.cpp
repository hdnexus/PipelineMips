#include "./Util.h"

//construtor da classe
Util::Util(){

}

int Util::binaryStringToInt(string binary){
    return stoi(binary,0,2);   
}