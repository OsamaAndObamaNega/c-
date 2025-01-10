#include <iostream>

int SumArray(int array[], int size){
   int result = 0;
   for(int i =0; i < size; i++){
      result += array[i];
   }

   return result;
}

int main(){
   int array[] = {1,2,3,4,5,6,7,8,9,10};
   int sizeArray = sizeof(array)/ sizeof(array[0]);

   int result = SumArray(array, sizeArray);
   std::cout << result << '\n';

   for(int i = 0; i < sizeArray; i++){
      std::cout << array[i] << ' ';
   }
   

   return 0;
}