#include <iostream>
int main(){
    int a;
    int b;
    int temp;
    std::cout<<"Enter the number 1 : ";
    std::cin>>a;
    std::cout<<"Enter the number 2 : ";
    std::cin>>b;
    temp = a;
    a =b;
    b = temp;
    std::cout<<"The number 1 is "<<a<<"\nThe number 2 is "<<b;
    return 0;
}
