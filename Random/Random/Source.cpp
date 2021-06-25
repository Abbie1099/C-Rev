#include<iostream>
#include<string>

class entity
{
public:
	 virtual std::string getname()
	{
		return "Entity";
	}
};

class player :public entity
{
private:
	std::string m_Name;
public:
	player(const std::string& name)
	{
		m_Name = name;
	}
		std::string getname()
	{
			return m_Name;
	}
};

void Print(entity* e)
{
	std::cout << e->getname() << std::endl;
}
int main()
{
	entity* e = new entity();
	player* p = new player("Abani");
	Print(e);
	Print(p);
}
