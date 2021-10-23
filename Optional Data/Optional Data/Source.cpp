#include<iostream>
#include<fstream>
#include<string>
#include<optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);
		if (stream)
		{
			std::string result;
			stream.close();
			return result;
		}
		return {};
}

int main()
{

	std::optional<std::string> data = ReadFileAsString("data.txt");
	std::string value = data.value_or("NOT PRESENT");
	std::cout << value << std::endl;
	if (data.has_value())
	{
		std::cout << "FILE OPENED SUCESSFULLY" << std::endl;
	}
	else 
	{
		std::cout << "NOT FOUND" << std::endl;
	}
}