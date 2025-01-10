#include <iostream>

void pizza(){
    std::cout << "here is ur pizza" << '\n';
}

void pizza(std::string topping1){
    std::cout << "here is ur " <<topping1<<" pizza" << std::endl;
}

void pizza(std::string topping1, std::string topping2){
    std::cout << "here is ur " <<topping1<< " and " <<topping2<<" pizza" << std::endl;
}

int main(){
    
    pizza("paparoni", "mashrom");
    
    
    return 0;
}

