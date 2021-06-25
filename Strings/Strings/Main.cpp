#include<iostream>
#include<string>
void printstring(const std::string& string)
{
	std::cout << string << std::endl;
}
int main()
{
	std::string name = std::string("Hello") + " Abbie";
	bool contains = name.find("ie") != std::string::npos;
	if (contains)
	{
		std::cout << "YES YES YES" << std::endl;
	}
	else
	{
		std::cout << "NO NO NO" << std::endl;
	}
	printstring(name);
}