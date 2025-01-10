#include <iostream>

void nothing(std::string name){
    std::cout <<";)" << std::endl;
    std::cout<<name << std::endl;
}

int main(){

    std::string name = "nothing";
    nothing(name);

    return 0;
}