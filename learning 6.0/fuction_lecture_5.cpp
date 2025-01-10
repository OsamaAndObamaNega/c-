#include <iostream>

long long int fectorial(int n){
	int fec = 1;
	
	for(int i = 1; i <= n; i++){
		fec *= i;
	}
	
	return fec;
}

int main(){
	int n = 17;
	
	std::cout << fectorial(n) << '\n';
	
	return 0;
}