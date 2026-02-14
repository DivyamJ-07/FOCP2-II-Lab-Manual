#include <iostream>
int main()
{
    int a;
    std::cout << "Enter the range : ";
    std::cin >> a;
    int count = 0;
    for (int i = 2; i <= a; i++)
    {
        bool prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
            }
        }
        if (prime)
        {
            count++;
        }
    }
    std::cout << "The  number of prime numbers from 0 to " << a << " is : " << count;
    return 0;
}