#include <iostream>

bool prime(int n);

int main(){
    int n = 5;

    bool ans = prime(n);


    std::cout << ans << '\n'; // If the output is 1 then this is a prime number

    return 0;
}


bool prime(int n){
    for(int i = 2; i < n; i++){
        if(i % n == 0){
            return true;
        }
        
    }
    return false;
}