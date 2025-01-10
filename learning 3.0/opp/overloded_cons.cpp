#include <iostream>
#include <string>

class Pizza {
public:
    std::string topping1;
    std::string topping2;
    std::string topping3;
    std::string topping4;

    // Constructor to initialize up to four toppings
    Pizza(std::string topping1, std::string topping2 = "", std::string topping3 = "", std::string topping4 = "") {
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
        this->topping4 = topping4;
    }
};

int main() {
    // Create Pizza objects with different toppings
    Pizza pizza1("pepperoni");
    Pizza pizza2("pepperoni", "mushrooms");
    Pizza pizza3("pepperoni", "mushrooms", "olives");
    Pizza pizza4("pepperoni", "mushrooms", "olives", "extra cheese");

    // Output the toppings for each pizza
    std::cout << "Pizza 1 toppings: " << pizza1.topping1 << '\n';
    std::cout << "Pizza 2 toppings: " << pizza2.topping1 << ", " << pizza2.topping2 << '\n';
    std::cout << "Pizza 3 toppings: " << pizza3.topping1 << ", " << pizza3.topping2 << ", " << pizza3.topping3 << '\n';
    std::cout << "Pizza 4 toppings: " << pizza4.topping1 << ", " << pizza4.topping2 << ", " << pizza4.topping3 << ", " << pizza4.topping4 << '\n';

    return 0;
}