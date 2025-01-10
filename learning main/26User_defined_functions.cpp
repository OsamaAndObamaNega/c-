// #include <iostream>

// void heppybarthday(std::string name){
//     for (int i =1; i<=5;i++){
//         std::cout<<"heppy darh day to u \n"<<name;
//         std::cout<<"heppy darh day to u \n\n\n"<<name;
//     }
// }


// int main(){

//     std::string name ="mohammod rahib";
//     heppybarthday(name);


//     return 0;
// }




#include <iostream>

void heppybarthday(std::string name,int age) {
    for (int i = 1; i <= 5; i++) {
        std::cout << "heppy darh day to u " << name<<'\n';
        std::cout << "ur "<<age<<"years old"<<'\n';
        std::cout << "heppy darh day to u " << name<<'\n';
        std::cout << "ur "<<age<<"years old\n";
    }
}

int main() {
    std::string name = "mohammod rahib";  // Declare and initialize name
    int age = 22;
    heppybarthday(name, age);  // Call the function after name is defined

    return 0;
}