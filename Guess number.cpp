#include <iostream>
#include <cstdlib>

const int ASKED_NUMBER = 45;

int main()
{
	std::cout << "Hey, you, try to guess number i minded!" << std::endl << "Just type number in range from 1 to 100" << std::endl;
	int testNumber;

	do
	{
		std::cin >> testNumber;

		if (testNumber == ASKED_NUMBER)
			std::cout << "Nice, little cheater!" << std::endl;
		else if (testNumber < ASKED_NUMBER)
			std::cout << "That's not enough, insert any higher number" << std::endl;
		else
			std::cout << "That's to much, insert any lower number" << std::endl;
		
	} while (testNumber != ASKED_NUMBER);

	system("pause");
	return 0;
}