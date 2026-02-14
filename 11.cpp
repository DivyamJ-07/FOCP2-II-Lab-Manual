#include <iostream>
int main(){
    int amount,quantity;
    std::cout<<"Enter the quantity : ";
    std::cin>>quantity;
    if(quantity>=1000){

        std::cout<<"Enter the amount: ";
        std::cin>>amount;
        std::cout<<"Amount after the discounted price is : "<<amount-amount*0.1;
    }
    else{
        std::cout<<"Enter your amount : ";
        std::cin>>amount;
        std::cout<<"No discount for you.";
    }
    return 0;
}