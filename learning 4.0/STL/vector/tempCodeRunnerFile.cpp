#include <iostream>
#include <vector>

using std::cout;

int main(){
    std::vector<int> vec = {1,2,3,4,5,6};

    cout << *(vec.begin()) << '\n';
    cout << *(vec.end()) << '\n';

    ret