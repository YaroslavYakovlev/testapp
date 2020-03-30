#include <iostream>
#include <cstdlib>
#include <ctime>
// #include "Skeleton.cpp"


void arrayFunc (int array[], int size){
for(int i = 0; i< size; i++){
    array[i] = i + 1;
    std::cout<< arrayFunc << " | ";
}    
}

int main()
{
 const int SIZE1 = 5;
 const int SIZE2 = 15;

 int array_1 [SIZE1] = {};
 int array_2 [SIZE2] = {};
    arrayFunc(array_1, SIZE1);
    arrayFunc(array_2, SIZE2);

return 0;
}


































// ValueClass *mc = new ValueClass();
    // mc->valueClass();
    // delete mc;

    // return 0;
