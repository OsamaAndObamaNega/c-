#include <iostream>


int digits(long long int n){
	int result = 0;
	while(n > 0){
		int lastDigit = n % 10;
		n /= 10 ;
		
		result += lastDigit;
	}
	return result;
}
		

int main(){
	
	long long int n = 3232323792798472101;
	
	std::cout << digits(n) << '\n';
	
	
	
	return 0;
}