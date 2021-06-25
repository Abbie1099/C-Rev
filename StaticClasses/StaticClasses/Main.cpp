#include<iostream>

struct Entity
{
	static int x, y;
	void print()
	{
		std::cout << x << "," << y << std::endl;
	}
};
int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;
	Entity e1;
	e1.x = 5;
	e1.y = 8;
	e.print();
	e1.print();
}

//When the 2nd entity's value is changed....
// It applies across all the instances
//So e.x and e.y will be equal to e1.x and e1.y