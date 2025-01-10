// #include <iostream>

// int main(){

//     int *pNum = NULL;

//     pNum = new int;

//     *pNum = 21;

//     std::cout<<"arradres: "<<pNum<<"\n";
//     std::cout<<"arradres: "<<*pNum<<"\n";

//     delete pNum;

//     return 0;
// }




#include <iostream>

int main(){
    char *pGrades = NULL;
    int size;
    std::cout<<"how many grades to enter in: \n";
    std::cin>>size;

    pGrades = new char[size];

    for(int i =0;i<size;i++){
        std::cout<<"enter grade #"<<i+1<<": ";
        std::cin>>pGrades[i];
    } 
    for(int i =0;i < size;i++){
        std::cout<<pGrades[i]<<'\n'; 
    }

    delete[] pGrades;

    return 0;
}