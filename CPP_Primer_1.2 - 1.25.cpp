// CPP_Primer_1.2 - 1.25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

//Exercise 1.3
//int main()
//{
//
//	std::cout << "Hello, World!" << std::endl;
//    return 0;
//}

int main()
{
	std::cout << "Enter two numbers to multi" << std::endl;
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << std::endl;
	std::cout << "Here the result" << num1 * num2 << "." << std::endl;
	system("pause");
	return 0;

}

