#include <iostream>


int add (int x, int y);

int main()
{
	using namespace std;
	int x = 0;
	cin >> x;
	int y = 0;
	cin >> y;
	std::cout << "The sum of " << x << " and " << y << " is: " << add(x,y) << std::endl; 
	return 0;
}