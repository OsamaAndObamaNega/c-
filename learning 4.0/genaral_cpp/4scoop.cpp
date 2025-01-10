#include<iostream>

int num = 3;

int somthing(){
    std::cout<< ::num<<"\n";

    return 0;
}

int mian(){
    int num = 4;
    std::cout<<num<<'\n';
    somthing();

    return 0;
}