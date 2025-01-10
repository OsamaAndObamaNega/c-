#include <iostream>

int main(){
    int size = 99;
    std::string foods[size];

    fill(foods, foods + (size/3),"pizza");
    fill(foods + (size/3),foods + size,"hembrger");
    fill(foods + (size/2),foods + size,"hembrger");

    for(std::string food : foods){
        std::cout << food<<'\n';
    }
}