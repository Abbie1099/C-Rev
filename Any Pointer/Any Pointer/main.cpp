#include<iostream>
#include<any>
#include<string>

//This is completely Useless 
// No actual use case
int main()
{
	std::any data;
	data = 2;
	data = "Abbie";
	data = std::string("Abani");

	std::string *str = std::any_cast<std::string>(&data);
	std::string& st = std::any_cast<std::string&>(data);
	std::cout << *str << std::endl;
	std::cout << str << std::endl;
	std::cout << &st << std::endl;
	std::cout << st;
}