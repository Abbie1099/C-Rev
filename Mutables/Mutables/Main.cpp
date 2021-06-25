#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
	mutable int debug = 0;
public:
	 const std::string& getname() const
	{
		 debug++;
		return m_Name;
		std::cout << debug << std::endl;
	}
};

int main()
{
	const Entity* e = new Entity();
	e->getname();
}