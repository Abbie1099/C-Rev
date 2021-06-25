#include<iostream>

class Entity
{
private:
	int m_X, m_Y;
public:
	int GetX() const
	{
		return m_X;
	}
	void SetX(int y)
	{
		m_Y = y;
		std::cout << y << std::endl;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}
int main()
{
	Entity *e = new Entity();
	e->SetX(20);
	const int MAX_AGE = 90;

	int* a = new int;
	*a = 2;
	a = (int*)&MAX_AGE;
	std::cout << *a;
}