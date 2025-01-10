// #include <iostream>

// int main(){
//     char name[2] = {'K','l'};

//     for (int i = 0; i < sizeof(name)/sizeof(char); i++){
//         std::cout<<name[i];
//     }
//     return 0;
// }



// // #include <iostream>

// // int main() {
// //     // Correctly initialize the array with characters
// //     char name[3] = {'K', 'l'}; // Include a null terminator for a proper C-string

// //     // Loop through the array and print each character
// //     for (int i = 0; i < sizeof(name) / sizeof(char); i++) {
// //         std::cout << name[i];
// //     }

// //     return 0;
// // }



#include <iostream>

int main(){
    std::string name[] = {"no1","no2","no3"};

    for(int i =0; i < sizeof(name)/sizeof(std::string);i++){
        std::cout<<name[i]<<std::endl;
    }
    return 0;
}