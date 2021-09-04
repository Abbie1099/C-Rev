#include<iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Base Constructor" << std::endl;
	}
	virtual ~Base()
	{
		std::cout << "Base Destructor" << std::endl;
	}
};

class Derived :public Base
{
private:
	int* mArray;
public:
	Derived()
	{
		mArray = new int[5];
		std::cout << "Derived Constructor" << std::endl;
	}
	~Derived()
	{
		std::cout << "Derived Destructor" << std::endl;
		delete[] mArray;
	}
};

int main()
{
	Base* base = new Base();
	delete base;
	std::cout << "-----------------------" << std::endl;
	Derived* derived = new Derived();
	delete derived;
	std::cout << "-------------------------" << std::endl;
	Base* rtti = new Derived();
	delete rtti;
}