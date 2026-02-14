#include <iostream>
#include <algorithm>
int main(){
    int a,temp,max;
    std::cout<<"Enter the number you want to enter: ";
    std::cin>>a;
    for(int i=0;i<a;i++){
        if(i==0){
            std::cout<<"Enter the number ";
            std::cin>>temp;
        }
        else{
            std::cout<<"Enter the number : ";
            std::cin>>max;
            temp=std::max(temp,max);
        }
    }
    std::cout<<"The maximum number is : "<<temp;
    return 0;
}