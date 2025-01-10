#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout<<"whats ur age?: ";
    std::cin>> age;

    std::cout<<"whats ur name: ";std::getline(std::cin >> std::ws, name);
    // std::cin >>name;
    

    


    std::cout <<"hello "<< name<<'\n';
    std::cout << "ur age is: "<<age<<'\n';



    return 0;
}

