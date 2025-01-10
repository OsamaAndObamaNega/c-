#include <iostream>
#include <vector>
#include <iomanip>  // For std::setw

struct inventoris_items
{
    std::string name;
    int quantity;
    int price;
};

int main(){
    std::vector<inventoris_items> inventoris;

    // Inserting items into the vector
    inventoris.insert(inventoris.end(), {
        {"Apples", 50, 2},
        {"Oranges", 30, 3},
        {"Bananas", 20, 1}
    });

    inventoris.insert(inventoris.end(), {
        {"Grapes", 40, 4},
        {"Mangoes", 10, 5}
    });

    // Find the maximum length for the 'name' column
    size_t max_name_length = 0;
    for (const auto& item : inventoris) {
        max_name_length = std::max(max_name_length, item.name.length());
    }

    // Set a width for the columns
    int name_width = max_name_length + 2;  // Add extra space
    int quantity_width = 10;               // Width for quantity (fixed for now)
    int price_width = 10;                  // Width for price (fixed for now)

    // Print the headers
    std::cout << std::setw(name_width) << std::left << "Name" 
              << std::setw(quantity_width) << "Quantity"
              << std::setw(price_width) << "Price" << '\n';

    // Print each item
    for (const auto& item : inventoris) {
        std::cout << std::setw(name_width) << std::left << item.name
                  << std::setw(quantity_width) << item.quantity
                  << std::setw(price_width) << item.price << '\n';
    }

    return 0;
}
