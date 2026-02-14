#include <iostream>
int main()
{
    int year;
    std::cout<<"Enter the year you want to enter :";
    std::cin>>year;
    if(year%4==0){
        std::cout<<"Leap Year";
    }
    else if(year%100==0 || year%400==0){
        std::cout<<"It is not a leap year";
    }
    else{
        std::cout<<"Invalid year.";
    }
    return 0;
}
