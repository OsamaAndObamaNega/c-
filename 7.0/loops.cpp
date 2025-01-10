#include <iostream>

void sqloop(){
	int n = 32;
	int b = 31;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= b; j++){
			std::cout << j << '\n';
		}
		std::cout<< '\n';
	}
}

void sqContinewLoop(){
	int track = 0;
	int n = 3;
	int b = 3;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= b; j++){
			std::cout << track;
			track ++;
		}
		std::cout << '\n';
	}
}

void trangel(){
	int n = 3;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			std::cout << (j+ 1);
		}
		std::cout << '\n';
	}
}

void trangelLetter(){
	char A = 'A';
	int n = 23;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			std::cout << (char)(A + j);
		}
		std::cout << '\n';
	}
}

void baskTra(){
	int n = 4;
	
	for(int i = 0; i <= n; i++){
		for(int j = (i + 1); j > 0; j--){
			std::cout << j;
		}
		std::cout << '\n';
	}
}

void inverted_tr(){
	int n = 3;
	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j<i; j++){
			std::cout << ' ';
		}

		for(int j = 0; j < (n - i); j++){
			std::cout << (j+1);
		}
		
		std::cout << '\n';
	}
}



void pyramind(){
	n = 32;
	
	
}


int main(){
	
	//sqloop(); ////int j = (i + 1); j >0; j--
	//sqContinewLoop();
	//trangel();
	//trangelLetter();
	//baskTra();
	inverted_tr();
	
	return 0;
}
