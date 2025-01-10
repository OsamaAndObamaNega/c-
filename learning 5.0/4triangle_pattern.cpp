#include <iostream>


int main(){
    int rows = 2; // the counthing starts from 1 not 0
    int collams = 3; // the counthing starts from 1 not 0

    for(int i = 0; i < rows; i++){
        for(int j =0 ; j < i+1; j++){
            std::cout << j+1 <<'\n';
        }
    }

}