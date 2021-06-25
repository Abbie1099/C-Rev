#include<iostream>
#include<string>
#include<memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created" << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroyed" << std::endl;
	}

	void print()
	{

	}
};

int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_unique<Entity>();
			e0 = sharedEntity;
		}
	}
}