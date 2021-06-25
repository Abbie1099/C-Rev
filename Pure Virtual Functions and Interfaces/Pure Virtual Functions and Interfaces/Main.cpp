#include<iostream>
#include<string>
class Printable
{
public:
	virtual std::string GetClassName() = 0;
};
class Entity:public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() { return "Entity"; }

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
	std::string GetClassName() { return "Player"; }
};
void printname(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable *obj)
{
	std::cout << obj->GetClassName() << std::endl;
}
int main()
{
	Entity* e = new Entity();
	player* p = new player("Abbie");
	Print(e);
	Print(p);

	delete e;
	delete p;
}