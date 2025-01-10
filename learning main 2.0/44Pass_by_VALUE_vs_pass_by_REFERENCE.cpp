// #include <iostream>

// void pass(std::string x ,std::string y ){
//     std::string temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

// int main(){
//     std::string x = "kool-aid";
//     std::string y = "whater";
//     std::string temp;

//     pass(x,y);
//     std::cout << x << std::endl;
//     std::cout << y << std::endl;

//     return 0;
// }


#include <iostream>

void pass(std::string &x ,std::string &y ){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

int main(){
    std::string x = "kool-aid";
    std::string y = "whater";
    std::string temp;

    pass(x,y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}