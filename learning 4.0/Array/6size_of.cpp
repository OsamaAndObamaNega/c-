#include<iostream>


int main(){
    int num[] = {1, 2, 3, 4, 5};
    std::cout<<num[0] << '\n';
    std::cout<<num[1] << '\n';
    std::cout<<num[2] << '\n';
    std::cout<<num[3] << '\n';
    std::cout<<num[4] << '\n';

    std::cout << sizeof(num) /sizeof(num[0]) <<"bt\n";

    return 0;
}