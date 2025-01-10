#include <iostream>

int main(){
    std::string Car[] = {"car1","car2","car3"};
    for(std::string car : Car){
        std::cout<< car <<'\n';
    }

    return 0;
}