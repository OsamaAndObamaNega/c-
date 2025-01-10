#include <iostream>

using std::cout;

int main(){
    
    std::string *pNum = NULL;
    long long int size;


    std::cout<<"enter the size: \n";
    std::cin >> size;

    pNum = new std::string[size];
    

    for(int i = 0; i < size; i++){
        std::cout << "enter the val at the index of  " << i << ": \n";
        std::cin >> pNum[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << "val at the index of  " << i << " is: " << pNum[i] << '\n';
    }

    delete[] pNum;
    
    return 0;

}
