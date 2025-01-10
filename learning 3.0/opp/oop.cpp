#include <iostream>

class Human{
    public:
        std::string name; int age; std::string gender;

        void eat(){
            std::cout << name << " is eating." << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping." << std::endl;
            }
        void work(){
            std::cout << name << " is working." << std::endl;
            }
        void display(){
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "Gender: " << gender << std::endl;
            }

};
 

int main(){
    std::cout<<"\n";
    // Create four instances of Human
    
    Human human1;
    human1.name = "Alice";
    human1.age = 30;
    human1.gender = "female";

    Human human2;
    human2.name = "Bob";
    human2.age = 22;
    human2.gender = "male";

    Human human3;
    human3.name = "Charlie";
    human3.age = 28;
    human3.gender = "male";

    Human human4;
    human4.name = "Diana";
    human4.age = 25;
    human4.gender = "female";

    // Display information and call methods for each human
    human1.display();
    human1.eat();
    human1.sleep();
    human1.work();
    
    std::cout << std::endl; // Just for better readability in output

    human2.display();
    human2.eat();
    human2.sleep();
    human2.work();

    std::cout << std::endl;

    human3.display();
    human3.eat();
    human3.sleep();
    human3.work();

    std::cout << std::endl;

    human4.display();
    human4.eat();
    human4.sleep();
    human4.work();
    return 0;
}