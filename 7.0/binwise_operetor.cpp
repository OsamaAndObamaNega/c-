#include <iostream>

using std::cout;

int main(){
	
	int n = 4;
	int n2 = 8;
	
	std::cout << (n & n2) << '\n';
	std::cout << (n | n2) << '\n';
	std::cout << (n ^ n2) << '\n';
	std::cout << "****\n";
	
	cout << ( 10 << 27 ) << '\n';
	
	cout << ( 8 >> 2) << '\n';
	
	
	
	return 0;
}