#include <iostream>
#include <vector>



auto pairOptical(std::vector<int>& nums, int terget){
	std::vector<int> ans;
	int size = nums.size();
	
	if (size < 2){
		return ans;
	}
	
	int i = 0, j = size-1;

	while(i < j){
		int pairSum = nums[i] + nums[j];
		
		if(pairSum > terget){
			j-- ;
		}
		else if(pairSum < terget){
			i++ ; 
		}
		else{
			ans.push_back(i);
			ans.push_back(j);
			return ans;
		}
	}
	
	return ans;

}



int main(){
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	int terget = 40;
	
	std::vector<int> ansMain = pairOptical(vec, terget);


	
	for(int i : ansMain){
		std::cout << i << ' ';
	}
	
	
	return 0;
}
