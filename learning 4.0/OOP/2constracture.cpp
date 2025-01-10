#include <iostream>
class Car{
    public:

    std::string brand;
    std::string model;
    int year;

    Car(std::string brand, std::string model, int year){
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void exelaretion(){
        std::cout << "this car is exeraletion\n";
    }
    void brack(){
        std::cout << "this car is bracking\n";
    }
    void acceleration(){
        std::cout << "this car is acceleration\n";
    }


};

void printCar(Car car){
    std::cout<< car.brand<<" "<<car.model<<" "<<car.year<<'\n';

}

int main(){

    Car car1("ford","masteng",2023);
    car1.exelaretion();
    car1.brack();
    car1.acceleration();


    return 0;
}









































// #include <iostream>

// class Student{
//     public:
//     std::std::string name;
//     int age;
//     char grade;

//     Student(std::std::string name, int age, char grade){
//         this-> name = name;
//         this-> age = age;
//         this-> grade = grade;
//     }

// };

// void printStudentCL(Student &student){
//     std::std::cout << "Name: " << student.name << std::endl;
//     std::std::cout << "Age: " << student.age << std::endl;
//     std::std::cout << "Grade: " << student.grade << std::endl;
// }

// int main(){

//     Student student1("John", 20, 'A');
//     Student student2("Jane", 21, 'B');

//     printStudentCL(student1);
//     std::std::cout<<"----------------------------------------\n";
//     printStudentCL(student2);


//     return 0;
// }