#include <iostream>


void prime(int n){
	if(n == 2){
		std::cout << "the number is prime number";
	}
	
	for(int i =2; i <= n-1; i++){
		if(n % i == 0){
			std::cout << "The number is a non-prime number"; 
			return;
			
		}else if(i == n-1 && i % n-1 != 0 ){
			std::cout << "the number is prime number";
		}
	}
}
 
int main(){
	int n =11;
	
	prime(n);
	
	return 0;
}


