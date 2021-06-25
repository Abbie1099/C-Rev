#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
public:
	Entity():m_Name("Unknown"){}
	Entity(const std::string& name):m_Name(name){}

	const std::string GetName() const
	{
		return m_Name;
	}
};

int main()
{
	Entity entity("Abbie");
	Entity* e = new Entity("Arthur Morgan");
	std::cout << entity.GetName() << std::endl;
	std::cout << e->GetName() << std::endl;

	delete e;
}