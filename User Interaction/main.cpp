#include <iostream>

#define PI 3.14

int main()
{
    std::cout << "Enter circle radius: ";

    float radius;

    std::cin >> radius;

    float circle_area = PI * radius * radius;

    std::cout << "The area of the circle is: " << circle_area << std::endl;

    return 0;
}
