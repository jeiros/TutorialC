#include <iostream>
#include <cmath>
bool IsEqual (double dX, double dY, double dEpsilon)
{
	std::cout << "Enter dX: ";
	std::cin >> dX;
	std::cout << "Enter dY: ";
	std::cin >> dY;
	std::cout << "Enter dEpsilon: ";
	std::cin >> dEpsilon;
	return fabs(dX - dY) <= dEpsilon * fabs (dX);
}

int main()
{
	std::cout >> IsEqual();
	return 0;
}