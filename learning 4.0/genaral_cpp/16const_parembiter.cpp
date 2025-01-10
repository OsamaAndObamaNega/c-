#include <iostream>

void PritnInfo(const std::string &name,const int &age){
    // name = " ";
    // age = 0;
    std::cout << "the name is: " << name << "\n";
    std::cout << "the age is: " << age << "\n";
}

int main(){
    std::string name = "somthings name";
    int age = 21;

    PritnInfo(name, age);


    return 0;
}