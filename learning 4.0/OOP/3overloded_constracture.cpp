#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Pizza{
    public:
    string topping1;
    string topping2;

    Pizza(){}
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1,string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};


void printPizza(Pizza &pizza){
    cout << "Topping 1: " << pizza.topping1 << std::endl;
}

int main(){
    Pizza pizza1;

    
    

    return 0;
}