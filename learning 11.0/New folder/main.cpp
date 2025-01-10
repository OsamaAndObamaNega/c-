#include <iostream>
#include "lib.h"

int x = 3;

int main(){
    int a = 34;
    a ++;
    a ++;
    a ++;
    std::string name = "sothing fsdfname";

    for(int i = 0; i<= 9; i++){
        std::cout << i << ' ';
    }
    std::cout << '\n';
    std::cout << a << '\n';
    std::cout << "hello world" << '\n';
    std::cout << name << '\n';
    if (true){
        std::cout << "nothing";
    }

    lib();
    std::cin >> a;
    return 0;


}