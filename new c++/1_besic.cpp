#include <iostream>

int main(){

    std::string name[] = {"ok12","noting"};
    for(int i = 0;i <sizeof(name)/sizeof(std::string);i++){
        std::cout<<name[i]<<'\n';
    }
}