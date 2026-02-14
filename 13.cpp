#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    double a, b, c, d;
    double roots[2];

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Enter the value of c: ";
    std::cin >> c;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        roots[0] = (-b + std::sqrt(d)) / (2 * a);
        roots[1] = (-b - std::sqrt(d)) / (2 * a);
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "The roots of the equation are : " << roots[0] << " and " << roots[1] << std::endl;
        std::cout << "The roots are real.\n";
    }
    else if (d == 0)
    {
        roots[0] = (-b) / (2 * a);
        roots[1] = (-b) / (2 * a);
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "The roots of the equation are : " << roots[0] << " and " << roots[1] << std::endl;
        std::cout << "The roots are real and equal.\n";
    }
    else
    {
        std::cout << "The roots of the equation are : " << roots[0] << " and " << roots[1] << std::endl;
        std::cout << "The roots are imaginary.\n";
    }

    return 0;
}
