#include <iostream>

int main()
{
    int row;
    int colem;
    std::string symbole;

    std::cout << "Enter the number of rows: ";std::cin>>row;
    std::cout << "Enter the number of columns: ";std::cin>>colem;
    std::cout << "somthing to use (like #,@, hi,): ";std::cin>>symbole;



    for (int i = 1;i<=row;i++){
        for(int j =1;j<=colem;j++){
            std::cout<<symbole;
        }
        std::cout<<'\n';
    }
    return 0;
}