#include <iostream>


int main(){
    double temp;
    char unit;

    std::cout<<"enter the unit to u want to canvert it to(C/F) ";std::cin>>unit;
    std::cout<<"enter the temp: ";std::cin>> temp;

    if (unit == 'F'|| unit =='f'){
        temp = (1.8*temp)+32.0;
        std::cout<<temp;
    }
    else if(unit =='c'||unit =='C'){
        temp = (temp -32.0) / 1.8;
        std::cout<<temp;
    }

    else{
        std::cout<<"invalud unit plase silet F/C";
    }

    return 0;

}

