#include <iostream>

void somthing(std::string name){
    std::cout << "Hello, World! " << name << '\n';
    std::cout << "Hello, World!" << '\n';
    std::cout << "Hello, World!" << '\n';
    std::cout << "Hello, World!" << '\n';
    std::cout << "Hello, World!" << '\n';
    std::cout << "Hello, World!\n\n";
}

int main(){
    std::string name = "username";
    
    somthing(name); // call the function with the name variable

    return 0; 

}