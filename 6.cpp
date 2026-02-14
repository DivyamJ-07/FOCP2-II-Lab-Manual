#include <iostream>
int main(){
    int a,b;
    std::cout<<"Enter how many employees: ";
    std::cin>>a;
    std::cout<<"Enter the basic amount: ";
    std::cin>>b;
    int amount = b+b*0.12;
    std::cout<<"The amount is :"<<a*b<<std::endl;
    std::cout<<"The amount after the increment is : "<<a*amount;
    return 0;
}
