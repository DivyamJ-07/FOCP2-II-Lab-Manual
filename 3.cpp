#include <iostream>
int main(){
    double temprt;
    bool choice;
    std::cout<<"Enter the choice : \n0 for C->F\n1 for F->C\nEnter your choice :";
    std::cin>>choice;
    if(choice==0){
        std::cout<<"Enter the temperature: ";
        std::cin>>temprt;
        std::cout<<"The temperature in fahrenheit is : "<<(temprt*1.8)+32;
    }
    else if(choice==1){
        std::cout<<"Enter the temperature: ";
        std::cin>>temprt;
        std::cout<<"The temperature in celsius is : "<<(temprt-32)/1.8;
    }
    else{
        std::cout<<"Please chooose the correct option.";
    }
    
    return 0;
}
