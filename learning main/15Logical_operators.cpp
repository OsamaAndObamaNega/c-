#include <iostream>

int main()
{
    int temp;
    bool sunny = false;

    std::cout << "What's the temp outside: ";
    std::cin >> temp;

    if (temp < 0 || temp > 30) { //((temp >0 && <30)) 
        std::cout << "The temp is shit" << '\n';
    }

    else {
        std::cout << "The temp is all good"<<'\n';
    }

    if(sunny){
        std::cout << "this is sunny outside" << '\n';
    }

    else if(sunny == false){
        std::cout << "this is cludy outside" << '\n';
    }

    else{
        std::cout<<"somthinf went worg<<'\n";
        std::cout<<"there colde be some issus whit the bool sunny in the proggam plase chack the issus "<<'\n';
    }

    return 0;
}



