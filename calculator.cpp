#include <iostream>



int main()
{
    using namespace std;
    cout << "Enter a value: ";
    double dX;
    cin >> dX;
 
    cout << "Enter a second value: ";
    double dY;
    cin >> dY;
 
    cout << "Enter one of the following: +, -, *, or /: ";
    char chChoice;
    cin >> chChoice;

    if (chChoice == '+')
    {
    	cout << dX << " + " << dY << " = " << dX + dY << endl;
    }
    if (chChoice == '-')
    {
    	cout << dX << " - " << dY << " = " << dX - dY << endl;
    }
    if (chChoice == '*')
    {
    	cout << dX << " * " << dY << " = " << dX * dY << endl;
    }
    if (chChoice == '/')
    {
    	cout << dX << " / " << dY << " = " << dX / dY << endl;
    }
    else
    {    
    	cout << "Please enter a valid symbol." << endl;
    }
    return 0;
}