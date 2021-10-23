#include<iostream>
#include<string>
#include"benchmark.h"

static uint32_t s_allocCount = 0;

void* operator new(size_t size)
{
	s_allocCount++;
	std::cout << "Allocating " << size << " bytes" << std::endl;
	return malloc(size);
}
#define STRING_VIEW 1
#if STRING_VIEW
void printName(std::string_view name)
{
	std::cout << name << std::endl;
}
#else
void printName(const std::string& name)
{
	std::cout << name << std::endl;
}
#endif // 0

int main()
{
	 std::string name = "Abbie";
#if STRING_VIEW
	
		 std::string_view firstname(name.c_str(), 3);
		 std::string_view lastname(name.c_str() + 3, 5);
#else
	 
		 std::string firstname = name.substr(0, 3);
		 std::string lastname = name.substr(3, 5);
	 
#endif
	Timer t;
	 printName("ABBIE");
	 printName(firstname);
	 printName(lastname);
	 std::cout << s_allocCount << " Allocation(s)" << std::endl;
}