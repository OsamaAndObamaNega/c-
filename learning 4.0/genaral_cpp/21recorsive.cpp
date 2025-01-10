#include <iostream>

int number_math(int number){
    int result = 1;
    for(int i = 1; i <= number; i++){
        result = result * i;
        number - 1;
    }
    return result;
}

int main(){

    int number = 30;

    int res = number_math(number);
    std::cout << res <<'\n';


    return 0;
}