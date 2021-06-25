#include<iostream>

#define LOG(x) std::cout<<x<<std::endl

int main()
{
	int var = 8;
	int* ptr = &var; 
	*ptr = 10;
	LOG(var);
	LOG(ptr);


	//Pointer Is A Fuckin Integer..... Nothing Else
}