#include "./Util.h"
#include <bitset>

//construtor da classe
Util::Util(){

}

int Util::binaryStringToInt(string binary){
    return stoul(binary,0,2);   
}
