#include <iostream>

int main(){
    std::string names[5] = {"somthing","somthign2"};

    std::string *pName = names;

    std::cout << *pName << '\n';

    return 0;
}