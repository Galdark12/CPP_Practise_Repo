#include <iostream>
#include <cstdlib>

int main()
{
	char inputSymbol;
	std::cout << "Please write any statemants. Press '.' to finish input" << std::endl;
	std::cin.get(inputSymbol); // First symbol input placed out of while loop, to check situation
	                           // when the first symbol is '.' .

	while (inputSymbol != '.')
	{
		if (inputSymbol == '\n')
			std::cout << inputSymbol;
		else
			std::cout << ++inputSymbol;

		std::cin.get(inputSymbol);
	}
	system("pause");
}