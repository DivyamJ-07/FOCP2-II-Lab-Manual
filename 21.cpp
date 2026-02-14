#include <iostream>
int main(){
    int a=5,c=1;
    while(c<=5){

        for(int i=5;i>=c;i--){
            std::cout<<i<<" ";
        }
        std::cout<<" "<<std::endl;
        c++;
    }
    return 0;
}