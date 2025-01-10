#include <iostream>

int main(){
	int n = 23;
	int sums = 0;
	
	for(int i = 0; i <= n; i++ ){
		if(i % 2 == 0){
			sums += 1;
		}
	}
	std::cout << sums << '\n';	
	std::cout << "**************\n";
	
	int number = 3;
	bool prime = true;
	
	for(int i = 2; i <= number; i++){
		if(number % i == 0){
			prime = false;
			break;
		}
	}
	
	std::cout << prime;
	
	return 0;
}
