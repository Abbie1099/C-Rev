#include<iostream>

void function()
{
	static int i = 0;
	i++;
	std::cout << i<<std::endl;
}

int main()
{
	function();
	function();
	function();
	function();
}
// if we were to remove the keyword static
// the output would be different as static takes memory each rime it is ran