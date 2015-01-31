#include <iostream>

void suma()
{
	using namespace std;
	cout << "This program will do the sum of two numbers." << endl;
	cout << "Please enter the first number: ";
	int x=0;
	cin >> x;
	cout << "Please enter the second number: ";
	int y=0;
	cin >> y;
	cout << "The result is: " << x + y << endl;
}

int main()
{
	suma();
	return 0;
}