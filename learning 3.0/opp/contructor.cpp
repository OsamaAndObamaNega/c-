#include <iostream>
#include <iomanip> // Include this for std::setw



class Student{
    public:
        std::string name;
        int age;
        char grade;
     Student(std::string name_,int age_,char grade_){
        this->name = name;
        this->age = age;
        this->grade = grade;
     }
};

int main() {
    Student student1("someonesNames1", 32, 'a');
    Student student2("someonesNames2", 32, 'b');

    // Set the width for the labels
    const int labelWidth = 20; // Adjust as needed for your labels

    std::cout << std::left << std::setw(labelWidth) << "Student 1's Name:" << student1.name << std::endl;
    std::cout << std::left << std::setw(labelWidth) << "Student 2's Name:" << student2.name << std::endl;
    std::cout << std::left << std::setw(labelWidth) << "Student 1's Age:" << student1.age << std::endl;
    std::cout << std::left << std::setw(labelWidth) << "Student 2's Age:" << student2.age << std::endl;
    std::cout << std::left << std::setw(labelWidth) << "Student 1's Grade:" << student1.grade << std::endl;
    std::cout << std::left << std::setw(labelWidth) << "Student 2's Grade:" << student2.grade << std::endl;

    return 0;
}