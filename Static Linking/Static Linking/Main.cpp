#include"GLFW/glfw3.h"
#include<iostream>

int main()
{
	int a = glfwInit();
	std::cout << "Static Linking" << std::endl;
	std::cout << a << std::endl;
}