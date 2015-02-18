#include <iostream>
#include <iomanip>
struct Fraction
{
	int numerator;
	int denominator;
};

double Multiply(Fraction sf1, Fraction sf2)
{
	using namespace std;

	cout << static_cast<float>(sf1.numerator * sf2.numerator) / 
		(sf1.denominator * sf2.denominator);

}

int main(int argc, char const *argv[])
{
	using namespace std;

	Fraction sf1;
		cout << "Input the first numerator: ";
		cin >> sf1.numerator;
		cout << "Input the first denominator: ";
		cin >> sf1.denominator;
	Fraction sf2;
		cout << "Input the second numerator: ";
		cin >> sf2.numerator;
		cout << "Input the second denominator: ";
		cin >> sf2.denominator;
	
	cout << Multiply(sf1,sf2) << endl;


	return 0;
}
