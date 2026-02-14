#include <iostream>
int main()
{
    int a = 8;

    for (int i = 0; i <= a; i++)
    {
        std::cout << "*";

    }
    std::cout<<'\n';
    for (int j = 0; j <= a; j++)
    {
        for (int i = 0; i <= a; i++)
        {
            if (i == 0 || i == a)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout<<'\n';
    }
    
    for (int i = 0; i <= a; i++)
    {
        std::cout << "*";
    }
    return 0;
}