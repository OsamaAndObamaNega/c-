#include <iostream>
#include <cstring>

int main() {
    char* elocation = new char[8];

    memset(elocation, 65, 8);

    for (int i = 0; i < 8; i++) {
        elocation[i] += (char)(i + 1);
    }

    for (int i = 0; i < 8; i++) {
        std::cout << elocation[i] << ' ';
    }   

    return 0;
}