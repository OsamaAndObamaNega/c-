#include <iostream>

int main() {
    std::string car[][3] = {{"i think so", "i don't know", "i guess"},
                            {"he", "his", "hes"}};

    int rows = sizeof(car) / sizeof(car[0]);
    int colloms = sizeof(car[0]) / sizeof(car[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colloms; j++) { // Fixed: Use `j` instead of `i`
            std::cout << car[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}


//https://youtu.be/CxGSnA-RTsA?si=l-3N4WcnpZmuHO1h
