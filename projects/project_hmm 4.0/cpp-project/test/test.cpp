#include <iostream>
#include "header1.h"
#include "header2.h"

void testFunction1() {
    // Add test logic for functions from header1.h
    std::cout << "Testing function from header1.h" << std::endl;
    function1(); // Call the function and check the result
}

void testFunction2() {
    // Add test logic for functions from header2.h
    std::cout << "Testing function from header2.h" << std::endl;
    functionFromHeader2(); // Call the function and check the result
}

int main() {
    testFunction1();
    testFunction2();
    return 0;
}