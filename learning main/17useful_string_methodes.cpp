#include <iostream>
#include <cstdio>

int main(){
    std::string name;
    int age;

    std::cout<<"enter ur name: ";std::getline(std::cin, name);
    std::cout<<"enter ur age: ";std::cin>>age;
    if (age >=18){
        std::cout<<"u r adult"<<'\n';
    }
    else{
        std::cout<<"u r not adult"<<'\n';
    }


    if (name.length() >10){
        std::cout<<"ur name is bigger then 10 bigit. ur names length is: "<<name.length()<<'\n';
    }
    else{
        std::cout<<"ur name is smaller then 10 bigit. ur names length is: "<<name.length()<<'\n';
    }

    name.clear();
    std::cout<<name<<'\n';


    if (name.empty()){
        std::cout<<"ur name is empty"<<'\n';
    }
    else{
        std::cout<<"hello "<<name<<'\n';
    }

    name.append("@gmail.com");

    printf("ur user name is now : ");
    std::cout<<name;

    std::cout<<name.at(0);

    name.insert(0,"@");
    std::cout<<name;

    std::cout<<name.find(' ');
    std::cout<<name.erase(0, 3);




    return 0;
}

