#include <iostream>
#include <iomanip>

int main ()
{
	int year = 2018, mon = 12, day = 5;

	std::cout << "Today is: "
		<< std::setw(2) << std::setfill('0') << day << "/"
		<< std::setw(2) << std::setfill('0') << mon << "/"
		<< year << std::endl;

	return 0;
}
