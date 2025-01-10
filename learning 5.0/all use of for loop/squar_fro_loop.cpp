#include <iostream>

void squar(){
	for(int i =0; i <= 3; i++){
		for(int j =0; j <= 4; j++){
			std::cout << '*';
		}
		std::cout << '\n';
	}
	std::cout <<'\n';
}

void squarCuntinew(){
	int tracNum = 1;
	for(int i =0; i <= 2; i++){
		for(int j =0; j <= 2; j++){
			std::cout << tracNum;
			tracNum++ ;
		}
		std::cout << '\n';
	}
	std::cout <<'\n';
}

void traangel(){
	int n = 4;
	for(int i =0; i <= n; i++){
		for(int j =0; j <= i; j++){
			std::cout << '*';
		}
		std::cout << '\n';
	}
	std::cout <<'\n';
}

void traangelNum(){
	int n = 4;
	int num = 1;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			std::cout << num;
		}
		
		std::cout << '\n';
		num++ ;
	}
	std::cout <<'\n';
}

void traangelNumCuntinew(){
	int n = 2;
	int num = 1;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			std::cout << num;
			num++ ;
		}
		std::cout << '\n';
	}
	std::cout <<'\n';
}

int main(){
	
	squar();
	squarCuntinew();
	traangel();
	traangelNum();
	traangelNumCuntinew();
	
	
	
	return 0;
}