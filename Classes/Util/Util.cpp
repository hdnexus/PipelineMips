#include "./Util.h"
#include <bitset>

//construtor da classe
Util::Util(){

}

int Util::binaryStringToInt(string binary){
    return stoul(binary,0,2);   
}

unsigned int Util::extractBits(unsigned int number,unsigned int begin,unsigned int numberOfBits){
    unsigned mask = ( (1 << (numberOfBits - begin +1)) -1 ) << begin;
    unsigned int isolatedBits = (number & mask) >> begin;
    return isolatedBits;
}   

unsigned int Util::extractBitsWithBitset(unsigned int number,unsigned int begin, unsigned int numberOfBits){
    bitset<32> valueToExtractBits(number);
}