#include <iostream>

int main() {
    std::string name;
    double gpa = 3.5;
    bool isStudent = true;
    char grads[] = {'A', 'B', 'C', 'D'};
    char grade = 'A';
    const int numStudents = 5;
    std::string studentNames[numStudents];

    studentNames[0] = "Alice";
    studentNames[1] = "Bob";
    studentNames[2] = "Charlie";
    studentNames[3] = "David";
    studentNames[4] = "Emily";

    std::cout << sizeof(gpa) << '\n';
    std::cout << sizeof(name) << '\n';
    std::cout << sizeof(grade) << '\n';
    std::cout << sizeof(isStudent) << '\n';
    std::cout << sizeof(grads) / sizeof(char) << '\n'; // Number of elements in grads
    std::cout<< sizeof(studentNames)<< '\n';

    // Corrected for loop:
    for (int i = 0; i < numStudents; i++) {  // Use numStudents here
        std::cout << studentNames[i] << '\n';
    }

    return 0;
}