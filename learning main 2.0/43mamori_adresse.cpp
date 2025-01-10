#include <iostream>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
    std::string name = "rahib";
    int age = 12;
    bool human = true;

    std::cout<<&name<<"\n";
    std::cout<<&age<<"\n";
    std::cout<<&human<<"\n";

    return 0;
}