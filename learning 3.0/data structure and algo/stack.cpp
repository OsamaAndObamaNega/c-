#include <iostream>
#include <stack>

int main(){
    std::stack<std::string> names = {"man o war","maya","julius","hitler"};
    names.push("dick");

    while(!names.empty()){
        std::cout<<names.top();
        names.pop();
        
    }

    return 0;
}