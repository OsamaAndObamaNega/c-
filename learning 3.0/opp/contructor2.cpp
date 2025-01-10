#include <iostream>

class Car{
    public:
    std::string color;
    int year;
    std::string model;
    Car(std::string color, int year, std::string model) {
        this->color = color;
        this->year = year;
        this->model = model;
        }

};

int main(){
    Car car1("color1",22,"model1");
    Car car2("color2",23,"model2");
    std::cout << car1.color << "\n";
    std::cout << car1.year << "\n";
    std::cout<< car1.model<<"\n";
    std::cout << car2.color << "\n";
    std::cout << car2.year << "\n";
    std::cout<< car2.model<<"\n";
    return 0;
    return 0;
}