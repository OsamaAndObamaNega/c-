#include <iostream>

struct Student{
    std::string name;
    int age;
    char grade;
    char student_class;
};
void PrintStudent(Student &student){
    std::cout << "Name: " << student.name << '\n';
    std::cout << "Age: " << student.age << '\n';
    std::cout << "Grade: " << student.grade << '\n';
    std::cout << "Student Class: " << student.student_class << '\n';
}

void changeStudentAge(Student &student,int age){
    student.age += age;
}

int main(){

    Student student1;
    student1.name = "John";
    student1.age = 20;
    student1.grade = 'A';
    student1.student_class = '1';

    Student student2;
    student2.name = "Jane";
    student2.age = 21;
    student2.grade = 'B';
    student2.student_class = '2';


    changeStudentAge(student1, 20);


    PrintStudent(student1);
    PrintStudent(student2);

    return 0;
}