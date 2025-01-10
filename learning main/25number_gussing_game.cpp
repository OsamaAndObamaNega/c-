#include <iostream>


int main()
{
    int num;
    int gusses;
    int trys;
    std::string ttm;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout<<"---number gussing game---\n";

    do{
        std::cout<<"enter a gusse beween 1-100: \n";std::cin>>gusses;
        trys++;
        if (gusses >num)
        {
            std::cout<<"the num is lower then \n"<<gusses;
        }
        else if (gusses <num)
        {
            std::cout<<"the num is hieghter then \n"<<gusses;

        }

        else{
            std::cout<<"correct the num is: "<<num<<'\n';
            if (trys >1){
                ttm.append("times");
            }
            else{
                ttm.append("time");
            }
            
            std::cout<<"you have tyed "<<trys<<' '<<ttm;
        }

    }while (gusses != num);

    return 0;


}