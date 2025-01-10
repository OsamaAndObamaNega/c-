#include <iostream>
#include <vector>


using std::cout;
using std::string;
using std::cin;

class Item{
    private:
    struct Item_s{
    string name; //The name of the item.
    int quantity; //The quantity of the item in stock.
    double price; //The price of the item.
    };

    public:
    
    void display(){
        //i need the vactor for thsi
        //pass for now on
    }

};

class Inventory{
    std::vector<
};

int main(){
    int user_choic;

    cout<< "1.Add an item \n2.Remove an item\n 3.Display the inventory\n 4.Exit the program\n";
    cin >> user_choic;
    switch (user_choic)
    {
    case 1:
        /* code */
        break;
    case 2:
    case 3:
    case 4:
    default:
        break;
    }

    return 0;
}