#include <iostream>


int main(){
    int n = 3;
    int& ref = n;
    ref =2;

    std::cout << ref;


    return 0;
}