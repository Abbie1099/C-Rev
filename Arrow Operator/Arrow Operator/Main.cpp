#include<iostream>
#include<string>


class Entity
{
public:
	int x;
	void print() const
	{
		std::cout << "Hello" << std::endl;
	}
};
class ScopedPtr
{
private:
	Entity* m_obj;
public:
	ScopedPtr(Entity* entity) :m_obj(entity) { std::cout << "Created Object" << std::endl; }
	~ScopedPtr()
	{
		delete m_obj;
		std::cout << "Deleted Object" << std::endl;
	}

	const Entity* operator->() const
	{
		return m_obj;
	}
};


int main()
{
	ScopedPtr entity = new Entity();
	entity->print();
}
