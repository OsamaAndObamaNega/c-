#include <iostream>

template < typename T, typename U >

auto max(T x, U y){
    return (x > y) ? x : y ;
}


int main(){
    char x = 'A';
    double y = 100.21;

    std::cout<< max(x,y) <<'\n';

    return 0;
}