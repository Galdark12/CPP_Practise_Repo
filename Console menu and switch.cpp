#include <iostream>
#include <cstdlib>

void menuFunc();
void heyFunc();
void funcExit();

int main()
{
	menuFunc();
	int caseChoser;
	std::cin >> caseChoser;

	switch (caseChoser)
	{
	case 1: heyFunc();
		break;

	case 2: std::cout << " gigl";
		break;

	case 3: funcExit();


	}

	system("pause");
	return 0;
}

void menuFunc()
{
	std::cout << "Please enter menu point" << std::endl;
	std::cout << "1) Hey heyyyy! 2) Lol, dont chose it \n"
		<< "3) Exit! " << std::endl;
}

void heyFunc()
{
	std::cout << "hey hey, budy, how much 'hey' you need today?" << std::endl;
	int numberOfHey;
	std::cin >> numberOfHey;

	for (int i = 0; i < numberOfHey; ++i)
	{
		std::cout << " Hey ";
	}
}

void funcExit()
{
	 exit(1);
}