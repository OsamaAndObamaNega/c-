#include <iostream>

// double squer(double lentgh){
//     return lentgh * lentgh;
// }

// double cube(double lentgh){
//     return lentgh *lentgh*lentgh;
// }

// int main(){
    
//     double lentgh = 6.0;
//     double area =squer(lentgh);
    
//     double voliwm = cube(lentgh);
    
//     std::cout<<"The area is: "<<area<<"cm^2\n";
//     std::cout<<"the area of the cude is: "<<voliwm<<"cm^3";
    
// }


std::string StringNames(std::string string1,std::string string2){
    return  string1 +" "+string2;
}

int main(){
    
    std::string first_name;
    std::string last_name;
    std::cout<<"enter ur first name: ";std::cin>>first_name;
    std::cout<<"enter ur last name: ";std::cin>>last_name;
    
    std::string full_name = StringNames(first_name,last_name);
    std::cout<<"so ur full name is : "<<full_name<<"\n";
    
    
    return 0;
}



    
    
    
    
