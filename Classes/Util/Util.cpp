#include "./Util.h"

//construtor da classe
Util::Util(){

}

int Util::binaryStringToInt(string binary){
    return stoul(binary,0,2);   
}

unsigned int Util::extractBits(unsigned int number,int begin, int numberOfBits){
    unsigned int  mask = (1 << (numberOfBits - begin)) - 1;
    return (number >> begin) & mask;
}   