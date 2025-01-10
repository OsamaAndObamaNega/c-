#include <iostream>



#define print(txt) std::cout << txt << std::endl
int main(){
    int n = 3;
    int *ptr;
    ptr = &n;

    print("Value of n: " + std::to_string(n));
    print("Address of n: " + std::to_string((long long)&n));
    print("Value of ptr: " + std::to_string(*ptr));
    print("Address of ptr: " + std::to_string((long long)ptr));

    int j = *ptr;
    std::cout << j;

    return 0;
}