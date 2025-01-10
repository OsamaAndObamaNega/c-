#include <iostream>

int main(){
	
	int n = 4;
	bool isPrime = true;
	
	for(int i =2; i < n-1; i++){
		if(n % i == n){
			isPrime = false;
			break;
		}
	}
	if(n ==2){
		std::cout <<"The number is a prime number\n";
	}
	
	isPrime == true ? std::cout << "The number is a prime number\n" : std::cout<< "The number is not a prime number\n";
	
	return 0;
	
}
