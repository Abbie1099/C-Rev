#include<iostream>
#include<string>
#include<variant>

int main()
{
	std::variant<std::string, int> data;

	data = "Abbie";
	
	if (std::string *value = std::get_if<std::string>(&data))
	{
		std::string &v = *value;
		std::cout << v << std::endl;
	}

	std::cout << sizeof(data);
}