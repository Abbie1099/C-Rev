#include <iostream>
int main()
{
	static int level = 8;
	static int speed = 5;

	speed = level> 5 ? level > 10 ? 15 : 10 : 5;

	std::cout << level << std::endl;
	std::cout << speed << std::endl;

}