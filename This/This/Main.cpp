#include<iostream>
#include<string>

void print(Entity* e);
class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;
		print(this);
	}
};


void print(Entity *e)
{
	//printing
}


int main()
{

}