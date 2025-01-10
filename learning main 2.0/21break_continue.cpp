#include <iostream>

int main(){

    for(int i =1;i<21;i++){
        if(i==13){
            continue; //breack to stop the loop
        }
        std::cout<<i<<'\n';
        
    }

    return 0;
}