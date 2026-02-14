#include <iostream>
int main()
{
    double a, n1, n2;
    std::cout << "Enter number 1 : ";
    std::cin >> n1;
    std::cout << "Enter number 2 : ";
    std::cin >> n2;
    std::cout << "Enter the arithematic operator you want to perform : ";
    std::cout << "\n1.Additon\n2.Subtraction\n3.Multiplication\n4.Modulus\nEnter the number of the operation to perform : ";
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "The sum is : " << n1 + n2;
    }
    else if (a == 2)
    {
        std::cout << "The difference is : " << n1 - n2;
    }
    else if (a == 3)
    {
        std::cout << "The Multiplication is : " << n1 * n2;
    }
    else if (a == 4)
    {
        std::cout << "The modulus is : " << ((int)n1 % (int)n2);
    }
    else
    {
        std::cout << "Invalid choice ";
    }

    return 0;
}