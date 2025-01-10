#include <iostream>

int main(){
    std::string foods[5];
    std::string temp;

    const int SIZE = sizeof(foods)/sizeof(foods[0]);
    
    for(int i = 0; i < SIZE; i++){
        std::cout<<"enter a food u like (q to quit)"<< i + 1 <<": \n";
        std::getline(std::cin, temp);
        if (temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout<<"u like the following food: \n";

    for(int i = 0; i < SIZE; i++){
        std::cout<<foods[i]<<'\n';
    }

    return 0;
}