cd ./Classes && g++ ./Util/Util.cpp ./FileHandler/FileHandler.cpp  ./Mips/Mips.cpp ./Registers/Registers.cpp ./Registers/Register.cpp  ./InstructionMemory/InstructionMemory.cpp  ../main.cpp -o ../main

if [ $? -eq 0 ];then 
   echo "compilado com sucesso!"
   cd ../ 
   ./main
else
   echo "nao compilado"
fi