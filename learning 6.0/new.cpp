#include <iostream>

int main(){
	
	int n = 4;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j > 0 ; j--){
			std::cout << j << ' ';
		}
		std::cout<< '\n';
	}
		
	return 0;
} 