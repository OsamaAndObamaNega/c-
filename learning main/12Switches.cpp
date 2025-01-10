// #include <iostream>

// int main(){
//     int month;

//     std::cout << "Enter a month: ";
//     std::cin >> month;

//     switch (month)
//     {
//     case 1:
//         std::cout << "It is January";
//         break;
//     case 2:
//         std::cout << "It is February";
//         break;
//     case 3:
//         std::cout << "It is March";
//         break;
//     case 4:
//         std::cout << "It is April";
//         break;
//     case 5:
//         std::cout << "It is May";
//         break;
//     case 6:
//         std::cout << "It is June";
//         break;
//     case 7:
//         std::cout << "It is July";
//         break;
//     case 8:
//         std::cout << "It is August";
//         break;
//     case 9:
//         std::cout << "It is September";
//         break;
//     case 10:
//         std::cout << "It is October";
//         break;
//     case 11:
//         std::cout << "It is November";
//         break;
//     case 12:
//         std::cout << "It is December";
//         break;
//     default:
//         std::cout << "Invalid month plase enter a mounth between (1-12)";
//         break;
//     }

//     return 0;
// }





#include <iostream>

int main(){
    char grade;

    std::cout << "What's the letter grade, nigga? ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        std::cout << "You're a straight-up boss, nigga!";
        break;
    case 'B':
    case 'b':
        std::cout << "You're doin' alright, G!";
        break;
    case 'C':
    case 'c':
        std::cout << "You're gettin' by, homie.";
        break;
    case 'D':
    case 'd':
        std::cout << "You need to step it up, fam.";
        break;
    case 'F':
    case 'f':
        std::cout << "You failed, bruh.";
        break;
    default:
        std::cout << "Invalid grade, nigga.";
        break;
    }

    return 0;
}