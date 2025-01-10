#include <iostream>
#include <tuple>

using std::string;
using std::cout;
using std::cin;

std::tuple<string, string, int> isValidUsernamePasswordAge(string &username, string& password, int& age);
void printuser

int main(){
    string username;
    string passowrd;
    int age;

    isValidUsernamePasswordAge(username, passowrd, age);
    printUserData(username, passowrd, age);
    

    return 0;
}


std::tuple<string, string, int> isValidUsernamePasswordAge(string &username, string& password, int& age){
    do{
        cout << "enter ur username(more then 2, less then 20 leeter): \n";
        std::getline(std::cin, username);
    } while (username.length() <=2 || username.length() >= 20);

    do{
        cout << "enter ur password(more then 8, less then 20):\n";
        std::getline(std::cin, password);
    }while(password.length() <=8 || password.length() >= 20);

    do
    {
        cout << "enter ur age: \n";
        cin >> age;
    } while (age <= 12 );

    

    return std::make_tuple(username, password, age);
}