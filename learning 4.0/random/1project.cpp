#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream> // For file operations
#include <sstream>
#include <cstdio>
#include <string>

// typedef vector<items> vecitem;

using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::ofstream;
using std::ifstream;


struct items {
    string name;
    int price;
    int quantity;
};

using vecitem = std::vector<items>;
// typedef std::vector<items> vecitem;

void addItems(vecitem &itemsList) {
    items newItem;
    cout << "Enter item name: ";
    cin >> newItem.name;
    cout << "Enter item price: ";
    cin >> newItem.price;
    cout << "Enter item quantity: ";
    cin >> newItem.quantity;

    // Add the new item to the vector
    itemsList.push_back(newItem);
    cout << "Item added successfully!\n";

    // Open a file to save the new item in append mode
    ofstream outFile("E:\\c++\\learning 4.0\\random\\items_list.txt", std::ios::app);
    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return;
    }

    // Determine maximum lengths for formatting
    size_t maxNameLength = 0;
    size_t maxPriceLength = 0;

    // Calculate maximum lengths from the existing items
    for (const auto &item : itemsList) {
        if (item.name.length() > maxNameLength) {
            maxNameLength = item.name.length();
        }
        if (std::to_string(item.price).length() > maxPriceLength) {
            maxPriceLength = std::to_string(item.price).length();
        }
    }

    // Add 2 spaces for indentation
    maxNameLength += 2;
    maxPriceLength += 2;

    // Format the new item for saving to the file
    outFile << std::left << std::setw(maxNameLength) << newItem.name 
            << std::setw(maxPriceLength) << newItem.price 
            << std::setw(10) << newItem.quantity << "\n";

    outFile.close(); // Close the file
}


void removeItem(vecitem &itemsList) {
    string itemName;
    cout << "Enter the name of the item to remove: ";
    cin >> itemName;

    for (auto it = itemsList.begin(); it != itemsList.end(); ++it) {
        if (it->name == itemName) {
            itemsList.erase(it);
            cout << "Item removed successfully!\n";
            return;
        }
    }
    cout << "Item not found!\n";
}




void loadItems(vecitem &itemsList) {
    ifstream inFile("E:\\c++\\learning 4.0\\random\\items_list.txt");
    if (!inFile) {
        cout << "No existing items found. Starting fresh.\n";
        return; // No file found, start with an empty list
    }

    string line;
    while (getline(inFile, line)) {
        std::istringstream iss(line);
        items newItem;
        string priceStr, quantityStr;

        // Read name, price, and quantity from the line
        if (getline(iss, newItem.name, ',') && 
            getline(iss, priceStr, ',') && 
            getline(iss, quantityStr)) {
            newItem.price = std::stoi(priceStr);
            newItem.quantity = std::stoi(quantityStr);
            itemsList.push_back(newItem);
        }
    }

    inFile.close();
}




// Assuming the structure of item
struct Item {
    std::string name;
    double price;
    int quantity;
};

using vecitem = std::vector<Item>;

void displayItems(const vecitem &itemsList) {
    if (itemsList.empty()) {
        printf("No items in the list.\n");
        return;
    }

    // Determine maximum lengths for formatting
    size_t maxNameLength = 0;
    size_t maxPriceLength = 0;

    for (const auto &item : itemsList) {
        if (item.name.length() > maxNameLength) {
            maxNameLength = item.name.length();
        }
        if (std::to_string(item.price).length() > maxPriceLength) {
            maxPriceLength = std::to_string(item.price).length();
        }
    }

    // Add 2 spaces for indentation
    maxNameLength += 2;
    maxPriceLength += 2;

    // Open a file to save the items in append mode
    std::ofstream outFile("E:\\c++\\learning 4.0\\random\\items_list.txt", std::ios::app);
    if (!outFile) {
        printf("Error opening file for writing.\n");
        return;
    }

    // Print header
    printf("%-*s %-*s %-10s %-10s\n", static_cast<int>(maxNameLength), "Name", 
           static_cast<int>(maxPriceLength), "Price", "Quantity", "Total Value");
    printf("%.*s\n", static_cast<int>(maxNameLength + maxPriceLength + 10 + 10), 
           "----------------------------------------------------------");

    // Print items and save to file
    for (const auto &item : itemsList) {
        double totalValue = item.price * item.quantity; // Calculate total value
        printf("%-*s %-*.*f %-10d %-10.2f\n", static_cast<int>(maxNameLength), item.name.c_str(), 
               static_cast<int>(maxPriceLength), 2, item.price, item.quantity, totalValue);

        // Save to file using printf
        outFile << item.name << ", " << item.price << ", " << item.quantity << ", " << totalValue << "\n";
    }

    outFile.close(); // Close the file
    printf("Items have been saved.\n");
}


int main() {
    bool isRunning = true;
    int choice;
    std::vector<items> items_list;

    while (isRunning) {
        cout << "\nMenu:\n";
        cout << "1. Add Item\n";
        cout << "2. Remove Item\n";
        cout << "3. Display Items\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addItems(items_list);
                break;
            case 2:
                removeItem(items_list);
                break;
            case 3:
                loadItems(items_list);
                displayItems(items_list);
                break;
            case 4:
                isRunning = false;
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}