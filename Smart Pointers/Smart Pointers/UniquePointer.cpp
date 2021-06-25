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
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		entity->print();
	}
}