cd ./Classes && g++ ./Util/Util.cpp  ../main.cpp -o ../main

if [ $? -eq 0 ];then 
   echo "Compilado com sucesso! :)"
else
   echo "Nao compilado :("
fi

if [ $? -eq 0 ];then 
   cd ../ 
   echo "compilado com sucesso!"
   ./main.exe
else
   echo "nao compilado"
fi