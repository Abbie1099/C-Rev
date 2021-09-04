#include<iostream>

struct vector2
{
	float x, y;
};
struct vector4
{
	union
	{
		struct
		{
			float x, y, z, w;
		};
		struct
		{
			vector2 a, b;
		};
	};
	
};

void printvec(const vector2& vector)
{
	std::cout << vector.x << std::endl << vector.y << std::endl;
}

int main()
{
	vector4 vector = { 1.0f,2.0f,3.0f,4.0f };
	printvec(vector.a);
	printvec(vector.b);

	vector.z = 500.0f;
	std::cout << "-----------------------------------------------------" << std::endl;
	printvec(vector.a);
	printvec(vector.b);

}
