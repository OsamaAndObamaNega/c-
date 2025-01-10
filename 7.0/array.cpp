#include <iostream>

int main(){
	int array[5];
	
	int sizeArray = sizeof(array) / sizeof(array[0]);
	
	for(int i = 0; i < sizeArray; i++){
		std::cin >> array[i];
	}
	std::cout << "P1" << '\n';
	
	for(int i = 0; i < sizeArray; i++){
		std::cout << array[i] << ' ';
	}
	
	
	return 0;
}