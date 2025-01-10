#include <iostream>
#include <vector>



void printVector(std::vector<int> num){
    for(int i : num){
        std::cout << i << ' ';
    }
}

int main(){

    std::vector<int> numbers = {21,32};

    numbers.push_back(33);
    numbers.push_back(34);


    printVector(numbers);
    std::cout <<'\n';

    std::cout <<numbers.size() << '\n';
    std::cout <<numbers.capacity() << '\n';

    std::cout << numbers.at(0) <<'\n';
    std::cout << numbers[0] <<'\n';

    std::cout <<"first: " << numbers.front() << '\n';
    std::cout <<"last: " << numbers.back() << '\n';


    // erase and insert

    numbers.erase(numbers.begin() +2, numbers.begin() +4);
    printVector(numbers);
    std::cout <<'\n';

    numbers.insert(numbers.begin() +1, 323);
    printVector(numbers);
    std::cout <<'\n';

    numbers.clear();
    printVector(numbers);
    std::cout <<'\n';

    std::cout <<numbers.size() <<'\n';
    std::cout <<numbers.capacity() <<'\n';
    
    std::cout << "is vector(numbers) is empty: " << numbers.empty() << '\n';


    return 0;
}













    // std::vector<int> numbers;

    // numbers.push_back(32);
    // numbers.push_back(34);

    // for(int i : numbers){
    //     std::cout << i << '\n';
    // }
    // std::cout << numbers.size();
    // std::cout << '\n';

    // std::vector<int> somthing(30,33);

    // for(int i: somthing){
    //     std::cout << i << ' ';
    // }
    // std::cout <<'\n';

    // std::vector<int> vsc_same(somthing);

    // for(int i: vsc_same){
    //     std::cout << i << ' ';
    // } 
