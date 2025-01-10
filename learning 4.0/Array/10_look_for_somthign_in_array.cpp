#include <iostream>

LookInaArray(int array[], int MyNum){

    for(int i : array){
        std::cout<< i;
    }
}

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int MyNum;
    int index;

    std::cout<<"enter the number to sharsch in array: ";
    std::Cin >> MyNum;

    index = LookInaArray(array, MyNum,);

    return 0;
}