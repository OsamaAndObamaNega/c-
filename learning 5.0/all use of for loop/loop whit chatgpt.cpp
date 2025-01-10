#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <fstream>

struct Student {
    std::string name;
    int age;
    std::string studentClass;
    float grade;
};

Student createStudent() {
    Student student;
    std::string input;

    std::cout << "Enter student name (or 'cam:q' to quit): ";
    std::getline(std::cin, input);
    if (input == "cam:q") {
        student.name = "";
        return student;
    }
    student.name = input;

    std::cout << "Enter student age: ";
    std::cin >> student.age;
    std::cin.ignore(); // Ignore leftover newline

    std::cout << "Enter student class: ";
    std::getline(std::cin, student.studentClass);

    std::cout << "Enter student grade: ";
    std::cin >> student.grade;
    std::cin.ignore(); // Ignore leftover newline

    return student;
}

std::vector<Student> collectStudents() {
    std::vector<Student> students;
    while (true) {
        Student student = createStudent();
        if (student.name.empty()) {
            break;
        }
        students.push_back(student);
    }
    return students;
}

void saveStudentToFile(const Student& student, const std::string& filepath) {
    std::ofstream outFile(filepath + student.name + ".txt");
    if (outFile) {
        outFile << "Name: " << student.name << "\n";
        outFile << "Age: " << student.age << "\n";
        outFile << "Class: " << student.studentClass << "\n";
        outFile << "Grade: " << student.grade << "\n";
        outFile.close();
        std::cout << "Student data saved to " << student.name << ".txt\n";
    } else {
        std::cerr << "Error: Could not create file for " << student.name << "\n";
    }
}

void printSquare(){
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 4; j++){ 
            std::cout << '*';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

// Output:
// *****
// *****
// *****
// *****

void printSquareWithNumbers(){
    int number = 1;
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            std::cout << number;
            number++;
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

// Output:
// 123
// 456
// 789

void printTriangle(){
    int n = 4;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            std::cout << '*';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

// Output:
// *
// **
// ***
// ****
// *****

void printTriangleWithSameNumbers(){
    int n = 4;
    int number = 1;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            std::cout << number;
        }
        std::cout << '\n';
        number++;
    }
    std::cout << '\n';
}

// Output:
// 1
// 22
// 333
// 4444
// 55555

void printTriangleWithContinuousNumbers(){
    int n = 2;
    int number = 1;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            std::cout << number;
            number++;
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

// Output:
// 1
// 23
// 456

void createWindow(){
    const char* className = "SampleWindowClass";
    WNDCLASS wc = {};

    wc.lpfnWndProc = DefWindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = className;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        className,
        "Output Window",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 500, 300,
        NULL,
        NULL,
        GetModuleHandle(NULL),
        NULL
    );

    if (hwnd) {
        ShowWindow(hwnd, SW_SHOWNORMAL);
        UpdateWindow(hwnd);
        MessageBox(hwnd, "The output will appear in the console window.", "Information", MB_OK);
    } else {
        std::cerr << "Failed to create window." << std::endl;
    }
}

int main(){
    createWindow();

    std::cout << "Collecting student data. Enter 'cam:q' as name to stop.\n";
    std::vector<Student> students = collectStudents();

    std::cout << "\nCollected Student Data:\n";
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << ", Age: " << student.age
                  << ", Class: " << student.studentClass << ", Grade: " << student.grade << '\n';
        saveStudentToFile(student, "./");
    }

    std::cout << "Calling printSquare function:\n";
    printSquare();

    std::cout << "Calling printSquareWithNumbers function:\n";
    printSquareWithNumbers();

    std::cout << "Calling printTriangle function:\n";
    printTriangle();

    std::cout << "Calling printTriangleWithSameNumbers function:\n";
    printTriangleWithSameNumbers();

    std::cout << "Calling printTriangleWithContinuousNumbers function:\n";
    printTriangleWithContinuousNumbers();

    return 0;
}
