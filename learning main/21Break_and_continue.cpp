#include <iostream>

int main(){
    for(int i =1;i<=20;i++){
        if(i==13){
            continue; //if we use the brake then the for  loop will terminate

        }
        std::cout<<i<<'\n';
    }

    return 0;
}