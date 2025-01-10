#include <iostream>

int get_sum(int array[], int size_of_array){
    int sum = 0;
    for(int i = 0; i < size_of_array; i++){
        sum += array[i];
    }
    return sum;
}

int mian(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size_of_array = sizeof(array)/sizeof(array[0]);
    int total = get_sum(array,size_of_array);

    std::cout<< total << '\n';
    
    return 0;
}

