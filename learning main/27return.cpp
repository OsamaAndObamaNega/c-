#include <iostream>

double squer(double length){
    return length *length;

}

int main(){

    double length =5.0;
    double area = squer(length);
    std::cout << "The area of the square is " << area << std::endl;


    return 0;
}
