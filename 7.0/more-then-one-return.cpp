#include <iostream>
#include <tuple>

std::tuple<int, float, char, std::string> myFunction() {
    // calculate values
    return std::make_tuple(5, 3.14, 'x', "some txt");
}

int main() {
    // Call the function and store the returned tuple
    auto [value1, value2, value3, value4] = myFunction();

    // Print the values
    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    std::cout << "Value 3: " << value3 << std::endl;
	std::cout << "Value 4: " << value4 << std::endl;

    return 0;
}
