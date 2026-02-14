#include <iostream>
int main(){
    int a,b,c;
    std::cout<<"Enter side number 1 : ";
    std::cin>>a;
    std::cout<<"Enter side number 2 : ";
    std::cin>>b;
    std::cout<<"Enter side number 3 : ";
    std::cin>>c;
    if(a==b && b==c){
        std::cout<<"It is an equilateral triangle.";
    }
    else if(a==b || b==c || a==c){
        std::cout<<"It is an isoscelous triangle.";
    }
    else{
        std::cout<<"It is an scalene triangle.";
    }
    return 0;
}