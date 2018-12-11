#include <iostream>

int main()
{
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    int squared = number * number;

    std::cout << "The squared value of " << number << " is " << squared << std::endl;

    return 0;
}
