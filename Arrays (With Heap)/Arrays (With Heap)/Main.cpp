#include <iostream>
#include<array>
int main()
{
	int Example[5];
	for (int i = 0; i < 5; i++)
	{
		Example[i] = 2;
	}

	int* Another = new int[5];
	for (int i = 0; i < 5; i++)
	{
		Another[i] = 2;
	}

	std::array<int, 5> others; // c++ 11 and beyond array initialization

	for (int i = 0; i < others.size(); i++)
	{
		others[i] = 2;
	}
	std::cout << Example[3] << std::endl;
	std::cout << Another[3] << std::endl;
	std::cout << sizeof(Example)/sizeof(int) << std::endl; //only stack
	std::cout << others[2] << std::endl;
	delete[] Another;
}