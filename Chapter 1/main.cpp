#include <iostream>
#include <iomanip>

int main ()
{
	int year = 2018, mon = 12, day = 11;

	std::cout << "Today is: "
		<< std::setw(2) << day << "/"
		<< std::setw(2) << mon << "/"
		<< year << std::endl;

	return 0;
}
