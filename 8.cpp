#include <iostream>
int main()
{
    int id;
    std::cout << "Enter Your ID : ";
    std::cin >> id;
    if (id % 3 == 0 && id % 5 == 0)
    {
        std::cout << "Buzz Fuzz";
    }
    else if (id % 3 == 0)
    {
        std::cout << "Buzz";
    }
    else if (id % 5 == 0)
    {
        std::cout << "Fuzz";
    }
    else
    {
        std::cout << "Invalid ID";
    }
    return 0;
}