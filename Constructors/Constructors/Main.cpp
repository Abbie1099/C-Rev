#include<iostream>
// these aren't initialised so they will print garbage values
class Entity
{
public:
	float x, y;

	void print()
	{
		std::cout << x << "," << y << std::endl;
	}
	Entity(float xx, float yy)
	{
		std::cout << "Created Entity" << std::endl;
		x = xx;
		y = yy;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity"<<std::endl;
	}
};

int main()
{
	Entity e(12, 13);
	e.print();
}