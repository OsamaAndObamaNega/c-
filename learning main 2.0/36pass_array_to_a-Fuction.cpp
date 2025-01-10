#include <iostream>

void look_for(int num[],int size,int index,int myNum){
    for(int i =0; i=myNum;i++){
        std::cout<<"the number is at the index of :"<<i<<'\n';
}
}
int main(){

    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(num)/sizeof(int);
    int index;
    int myNum;


    std::cout<<"enter a elimat u what to  find \n";std::cin>>myNum;

    look_for(num,size,index,myNum);

    return 0;
}