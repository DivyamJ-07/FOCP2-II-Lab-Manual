#include <iostream>
int main(){
    int i,j;
    std::string number_Check;
    std::cout<<"Enter a number :";
    std::cin>>number_Check;
    for (i=0,j=number_Check.length()-1;i<number_Check.length();i++,j--){
        if(number_Check[i]!=number_Check[j]){
            break;
        }
    }
    if(i>=j){
        std::cout<<"It is an palindrome.";
    }
    else{
        std::cout<<"It is not an palindrome.";
    }
    return 0;
}