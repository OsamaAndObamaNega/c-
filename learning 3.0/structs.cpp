#include <iostream>
#include <string>

struct Player {
    std::string name; // Player's name
    double health;    // Health can be a double (int or float)
    double speed;     // Speed can be a double (int or float)
    double jump;      // Jump can be a double (int or float)

    // Constructor for easy initialization
    Player(std::string n, double h, double s, double j) 
        : name(n), health(h), speed(s), jump(j) {}
};

int main() {
    // Create player instances
    Player man_o_war("Man O' War", 100, 23.0, 3);
    Player someone2("Someone 2", 110.0, 20, 2.5);
    Player morno("Morno", 100.5, 23, 3.8);

    // Output the attributes of each player
    std::cout << man_o_war.name << " - Health: " 
              << man_o_war.health << ", Speed: " 
              << man_o_war.speed << ", Jump: " 
              << man_o_war.jump << std::endl;

    std::cout << someone2.name << " - Health: " 
              << someone2.health << ", Speed: " 
              << someone2.speed << ", Jump: " 
              << someone2.jump << std::endl;

    std::cout << morno.name << " - Health: " 
              << morno.health << ", Speed: " 
              << morno.speed << ", Jump: " 
              << morno.jump << std::endl;

    return 0;
}