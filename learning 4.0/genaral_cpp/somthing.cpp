#include <iostream>



class Characutre{
    
    private:
    struct CharacterToolBar{
        std::string name;
        int stamina;
        int health;
    };
    CharacterToolBar toolBar;
    public:

    Characutre(std::string name, int stamina, int health){
        toolBar.name = name;
        toolBar.stamina = stamina;
        toolBar.health = health;

    }

    void printData() const { // Changed to void and made it a member function
        std::cout << "Name: " << toolBar.name << '\n';
        std::cout << "Stamina: " << toolBar.stamina << '\n';
        std::cout << "Health: " << toolBar.health << '\n'; // Added health for completeness
    }

    

};

int main(){

    Characutre Characutre1("somthign",100,100);
    Characutre Characutre2("enum",200,120);
    Characutre1.printData();
    std::cout<<"---------------\n";
    Characutre2.printData();

    return 0;
}