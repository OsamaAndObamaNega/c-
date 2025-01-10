#include <iostream>
#include <vector>

using std::cout;

int main(){
    std::vector<int> vec = {1,2,3,4,5,6};
    std::vector<std::string> stringvec = {"somthing1","somthing2"};

    cout << *(vec.rbegin()) << '\n';
    cout << *(vec.rend()) << '\n';

    std::vector<int>::iterator i;
    for(i = vec.begin(); i != vec.end(); i++){
        cout << *i <<' ';
    }

    std::vector<std::string>::iterator it;
    for(it = stringvec.rbegin(); it != stringvec.rend(); i++){
        cout<< *(i) << '\n';
    }

    return 0;
}