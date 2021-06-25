#include<iostream>
#include<string>

class Entity
{
public:
	 virtual std::string GetName()
	{
		return "Entity";
	}
};
class player :public Entity
{
private:
	std::string m_Name;
public:
	player(const std::string& name) :m_Name(name) {};
	std::string GetName()
	{
		return m_Name;
	}
 };
void printname(Entity* entity)
{
	std::cout << entity->GetName()<<std::endl;
}
int main()
{
	Entity* e = new Entity();
	printname(e);

	player* p = new player("Abbie");
	printname(p);
	
	delete e;
	delete p;
}