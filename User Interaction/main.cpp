#include <iostream>

int main()
{
    int n1, n2, n3, n4, n5;

    std::cout << "Enter five integers, separated by space: ";

    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    float average = sum / 5.0f;

    std::cout << "The sum is " << sum << std::endl;

    std::cout << "The average is " << average;

    return 0;
}
