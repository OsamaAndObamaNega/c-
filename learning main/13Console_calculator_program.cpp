#include <iostream>

int main(){

    char operetor;

    
    std::cout<<"what do u want to do (+ - / *): ";
    std::cin>>operetor;
    
    double a;std::cout<<"enter the first num: ";std::cin>>a;
    
    double b;std::cout<<"enter the second num: ";std::cin>>b;


    switch (operetor)
    {
    case '+':
        std::cout << "The result is: " << a + b;
        break;
    case '-':
        std::cout << "The result is: " << a - b;
        break;
    case '*':
        std::cout << "The result is: " << a * b;
        break;
    case '/':
        if (b != 0) {
            std::cout << "The result is: " << a / b;
        } else {
            std::cout << "Error: Division by zero!";
        }
        break;
    default:
        std::cout << "Invalid operator plase enter operetors nigga";
        break;
    }



}