cd ./Classes && 
g++ ./Util/Util.cpp ./Stages/ID/ID.cpp  ./FileHandler/FileHandler.cpp  ./Mips/Mips.cpp ./Components/ALU/ALU.cpp ./Components/IF_ID/IF_ID.h  ./Components/Registers/Registers.cpp ./Components/Registers/Register.cpp  ./Components/InstructionMemory/InstructionMemory.cpp ./Components/PC/PC.h  ../main.cpp -o ../main

if [ $? -eq 0 ];then 
   echo "compilado com sucesso!"
   cd ../ 
   ./main
else
   echo "nao compilado"
fi