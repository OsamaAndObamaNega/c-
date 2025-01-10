#include <iostream>

void Show_balance(int balance) {
    std::cout << "Your balance is: " << balance << "\n";
}

int deposit(int balance) {
    int deposit_amount;
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> deposit_amount;
    if (deposit_amount < 0) {
        std::cout << "Invalid deposit amount.\n";
        return balance;
    }
    return deposit_amount + balance;
}

int Withdraw(int balance) {
    int withdraw_amount;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> withdraw_amount;

    if (withdraw_amount > balance) {
        std::cout << "You can't withdraw more than what you have.\n";
        Show_balance(balance);
    } else if (withdraw_amount < 0) {
        std::cout << "Invalid withdraw amount.\n";
    } else {
        balance -= withdraw_amount;
    }
    
    return balance;
}

int main() {
    int balance = 0;
    int choice;

    do {
        std::cout << "\n-------- Banking Program --------\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                Show_balance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = Withdraw(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}