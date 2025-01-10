#include <iostream>

int main(){

    int *pName = nullptr;
    int age = 12;

    // pName = &age;

    if(pName == nullptr){
        std::cout << "pName Is a -nullptr-\n";
    }else{
        std::cout <<"pName is NOT a -nullptr-\n";
        std::cout << *pName;
    }

    return 0;       
}