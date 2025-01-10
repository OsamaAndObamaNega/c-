#include <iostream>


int main(){
    int rows = 2; // the counthing starts from 1 not 0
    int collams = 3; // the counthing starts from 1 not 0


    for(int i =0; i < rows; i++){
        for(int j = 0; j < collams; j++ ){
            std::cout << (char)((int)'A' + j) << " ";;
        }
        std::cout<<'\n';
    }

}