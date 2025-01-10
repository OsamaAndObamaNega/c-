#include <iostream>

class Human{
    public:
        std::string name;
        std::string job;
        int age;


    void eat(){
        std::cout << "This human is eatign" << '\n';
    }
    void sleep(){
        std::cout << "This human is sleeping" << '\n';
    }
    void work(){
        std::cout << "This human is working" << '\n';E
    }
};

int main(){

    Human human1;
    
    human1.name = "somthing name";
    human1.job = "somthing job";
    human1.age= 21;
    
    human1.eat();
    human1.sleep();
    human1.work();

    std::cout<<human1.name <<'\n';
    std::cout<<human1.job <<'\n';
    std::cout<<human1.age <<'\n';


    return 0;
}