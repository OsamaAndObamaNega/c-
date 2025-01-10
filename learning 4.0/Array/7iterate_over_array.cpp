#include <iostream>

int main(){
    std::string Car[] = {"car1","car2","car3"};
    for(int i = 0; sizeof(Car)/sizeof(std::string); i++){
        std::cout<< Car[i]<<'\n';
    }

    return 0;
}