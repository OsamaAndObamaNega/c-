#include <iostream>
#include <vector>


int chackUnic(std::vector<int> vec){
	

}


int main(){
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
	std::cout << vec[0] << '\n';
	
	std::cout<< "*********\n";
	
	for(int i : vec){  //// fro each loop
		std::cout << i << ' ';
	}std::cout << '\n';
	
	std::cout << "end of part 1\nnow operetion over vector \n";
	
	std::cout << "vec size= " << vec.size() << '\n';
	
	vec.push_back(12);
	vec.push_back(12);/////////////////
	
	std::cout << "vec size after push back= " << vec.size() << '\n';
	
	vec.pop_back(); //////////
	
	std::cout << "vec size after pop back= " << vec.size() << '\n';
	
	
	// there is also capacity and size for ex std::vector<int> vec{1,2,3}; in this case the size is 3 (the ammount of elimant) but the capacity is 4 (if u can't understend then u better ask chatgpt or any other AI.)
	
	std::cout<< "the capacity of vec: " << vec.capacity() << '\n';
	
	
	std::cout << "front=" << vec.front() << '\n';
	std::cout << "back=" << vec.back() << '\n';
	
	std::vector<int> vector2 = {1,2,3,4,5,6,7,8,19};
	
	int unickValue = chackUnic(vector2);
	
	
	return 0;
}