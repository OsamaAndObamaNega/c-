#include <iostream>



int main(){
    int n;
    int sum;

    std::cout<< "enter the val of n: ";
    std::cin>> n;

    for(int i = 0; i = n; i++){
        int digit = n % 10;
        if(digit % 2 == 0){
            sum += digit;
        }
        n = n/10;
    }
    std::cout << sum;

}