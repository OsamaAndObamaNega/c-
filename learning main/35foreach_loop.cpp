#include <iostream>

int main() {

    std::string student[] = {"noone", "no", "i don;t know any name of the studentes"};

    // Calculate the number of elements correctly
    int numStudents = sizeof(student) / sizeof(student[0]); 

    for(std::string stu : student){
        std::cout << stu << std::endl;
    }

    return 0;
}
