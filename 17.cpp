#include <iostream>
#include <string>
#include <cmath>
int main(){
    int a,b=0;
    std::cout<<"Enter the number : ";
    std::cin>>a;
    for (int i = 1; i < a; i++)
    {
        if(a%i==0){
            b+=i;
        }
    }
    if(b==a){
        std::cout<<"It is an perfect number.\n";
    }
    else{
        std::cout<<"It is not an perfect number.\n";
    }
    std::string s = std::to_string(a);
    int digits = s.length();
    int sum=0;
    for(char c:s){
        int d=c-'0';
        sum+=pow(d,digits);
    }
    if(sum==a){
        std::cout<<"It is an angstorm number.\n";
    }
    else{
        std::cout<<"It is not an angstorm number.\n";
    }
    
    return 0;
}