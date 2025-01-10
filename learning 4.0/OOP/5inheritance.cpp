#include <iostream>

class Animal{
    public:
        bool alive = true;

    void eat(){
        std::cout << "Eating..." << std::endl;
    }
    void walk(){
        std::cout << "Walking..." << std::endl;
    }
};

class Dog : public Animal{
    void dark(){
        std::cout << "Barking..." << std::endl;
    }
};

class Cat : public Animal{
    public:
    Cat(){
        alive = false;
    }
    void purr(){
        std::cout << "Purring..." << std::endl;
    }
    
};

void true_false(bool alive){
    if(alive){
        std::cout<<"true"<<'\n';
    }else{
        std::cout<<"false"<<'\n';
    }
}

int main(){

    Dog dog1;
    Cat cat1;

    dog1.eat();
    dog1.walk();
    true_false(dog1.alive);
    true_false(cat1.alive);

    cat1.eat();
    cat1.purr();
    cat1.walk();



    return 0;
}