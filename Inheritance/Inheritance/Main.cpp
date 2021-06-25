#include<iostream>

class Entity
{
public:
	float x, y;

	void move(float xa, float ya)
	{
		x += xa;
		y += ya;
	}
};

class Player :public Entity
{
public:
	const char* Name;
	void print()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	Player player;
	player.move(12,13);
	std::cout << sizeof(player) << std::endl;
}