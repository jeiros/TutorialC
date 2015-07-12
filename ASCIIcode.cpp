#include <iostream>

int main(int argc, char const *argv[])
{
	char chChar;
	std::cout << "Input a keyboard character: ";
	std::cin >> chChar;
	std::cout << chChar << " has ASCII code " << (int)chChar << std::endl;
	return 0;
}