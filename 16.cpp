#include <iostream>
int main()
{
    int a;
    std::cout << "Enter the number  : ";
    std::cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            std::cout << "It is not a prime number.";
            return 1;
        }
    }
    std::cout << "It is prime number.";
    return 0;
}