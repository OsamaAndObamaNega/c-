#include <iostream>

int main(){
	int n = 20;
	int ans = 0;
	int pow = 1;
	
	while(n > 0){
		int rem = n % 2;
		n /= 2;
		ans += (rem * pow);
		pow *= 10;
	}
	std::cout << ans;
	
	return 0;
}