cd ./Classes && g++ ./Util/Util.cpp ./FileHandler/FileHandler.cpp  ../main.cpp -o ../main

if [ $? -eq 0 ];then 
   echo "compilado com sucesso!"
   cd ../ 
   ./main.exe
else
   echo "nao compilado"
fi