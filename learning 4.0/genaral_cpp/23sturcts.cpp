#include <iostream>

struct Student{
    std::string name;
    int age;
    char grade;
    char student_class;
};


int main(){

    Student student1;
    student1.name = "John";
    student1.age = 20;
    student1.grade = 'A';
    student1.student_class = '1';

    std::cout << "Name: " << student1.name << '\n';
    std::cout << "Age: " << student1.age << '\n';
    std::cout << "Grade: " << student1.grade << '\n';
    std::cout << "student_class: " << student1.student_class << '\n';



    return 0;
}