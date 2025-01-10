#include <iostream>



int main(){
    char ch;

    std::cout <<"enter a character: \n";
    std::cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        std::cout<<"enter character is lower case\n";
    }else if(ch >= 'A' && ch <= 'Z'){
        std::cout<<"enter character is upper case\n";
    }else{
        std::cout<<"enter character is digit or somthing else\n";
    }

    return 0;
}