#include <iostream>

int doubleNumber(int x)
{
	return 2 * x;
}

int main()
{
	using namespace std;
	int x;
	cin >> x;
	cout << doubleNumber(x) << endl;
	return 0;
}