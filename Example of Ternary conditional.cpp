#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "Please enter two numbers to decide, what biger" << std::endl;
	int a, b;
	std::cin >> a >> b;

	int c = (a > b) ? a : b;

	std::cout << c << " is bigger" << std::endl;
    
	system("pause");
	return 0;


}