#include <iostream>

enum Grades {A,B,C,D,F};

using std::cout;
using std::cin;

int main(){
    int grade = C + 1;
    

    switch (grade)
    {
    case 1:
        cout<< "good u got a  A!";
        break;
    case 2:
    cout<< "good u got a  B!";
        break;
    case 3:
    cout<< "good u got a  C!";
        break;
    case 4:
    cout<< "good u got a  D!";
        break;
    case 5:
    cout<< "good u got a  F!";
        break;
    default:
        cout<<"Ur leing!!";
    }

    return 0;
}