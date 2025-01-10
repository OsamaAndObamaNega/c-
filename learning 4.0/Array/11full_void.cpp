#include <iostream>

int main(){

    const int FOOD_AMMOUNT = 99;

    std::string array[FOOD_AMMOUNT];

    fill(array, array + (FOOD_AMMOUNT/3), "food pizza");
    fill(array + (FOOD_AMMOUNT/3), array + (FOOD_AMMOUNT/3)*2, "hamm" );
    fill(array + (FOOD_AMMOUNT/3)*2, array + FOOD_AMMOUNT, "somthing" );

    for(std::string i : array){
        std::cout<< i << '\n';
    }
    
    return 0;
}