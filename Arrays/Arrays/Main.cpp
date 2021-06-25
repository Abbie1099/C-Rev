#include<iostream>
#include<string.h>

int main()
{
	int Example[5];
	int* ptr = Example;
	
	for (int i = 0; i < 5; i++)
	{
		Example[i] = 2;
	}

	Example[2] = 5;
	*(ptr + 2) = 6;
	int* pt = &Example[2];

	std::cout << Example[2] << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << *pt << std::endl;
}