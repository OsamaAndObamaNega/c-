#include <iostream>

class Stove{
    private:
        int temperature = 100;
    
    void setTemperature(int temperature){
        if(temperature < 0){
            this-> temperature = 0;
        }else if(temperature >=10){
            this-> temperature = 10;
        }else{
            this-> temperature = temperature;
        }
        
    }
    public:
    Stove(int temperature){
        setTemperature(temperature);
    }
    int getTemperature(){
            return temperature;
        }
    
};

int main(){

    Stove stove1(33);

    // stove1.setTemperature(33);
    
    std::cout << stove1.getTemperature() << '\n';
    return 0;
}