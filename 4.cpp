#include <iostream>
int main(){
    double item_no,quantity,unit_price;
    std::cout<<"Enter the item number: ";
    std::cin>>item_no;
    std::cout<<"Enter the quantity of the item: ";
    std::cin>>quantity;
    std::cout<<"Enter the unit price of the item: ";
    std::cin>>unit_price;
    double amount = quantity*unit_price;
    std::cout<<"The price is : "<<amount<<std::endl;
    std::cout<<"The price after the discout is : "<<quantity-quantity*0.2;
    return 0;
}
