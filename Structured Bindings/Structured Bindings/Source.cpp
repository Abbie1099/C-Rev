#include<iostream>
#include<tuple>
#include<string>

std::tuple <std::string, int> createPerson()
{
	return{ "Abbie",22 };
}
int main()
{
	/*auto person = createPerson();
	auto& name = std::get<0>(person);
	auto& age = std::get<1>(person);*/

	/*std::string name;
	int age;
	std::tie(name, age) = createPerson();
	std::cout << name << " " << age;*/

	auto [name, age] = createPerson();
	std::cout << name << std::endl;
	std::cout << age << std::endl;
}