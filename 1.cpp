#include <iostream>
#include <cmath>
#include <iomanip>
int main(){
    int marks1,marks2,marks3;
    std::cout<<"Enter the marks of student 1 : ";
    std::cin>>marks1;
    std::cout<<"Enter the marks of student 2 : ";
    std::cin>>marks2;
    std::cout<<"Enter the marks of student 3 : ";
    std::cin>>marks3;
    int avg = (marks1+marks2+marks3)*1.0/3.0;
    std::cout<<"The average marks of the students are : "<< std::ceil(avg*100.0)/100.0;
    return 0;
}
