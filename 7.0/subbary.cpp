#include <iostream>

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	int arraySZ = sizeof(array)/sizeof(array[0]);
	
	for(int st = 0; st < arraySZ; st++){
		for(int end = st; end < arraySZ; end++){
			for(int i =0; i <= end; i++){
				std::cout << array[i];
			}
			std::cout << ' ';
		}
		std::cout << '\n';
	}
	
	return 0;
}