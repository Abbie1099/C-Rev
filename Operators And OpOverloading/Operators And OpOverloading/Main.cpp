#include <iostream>

struct Vector2
{
	float x, y;
	Vector2(float x, float y) :x(x),y(y) {}

	Vector2 operator +(const Vector2& other)
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator*(const Vector2& other)
	{
		return Vector2(x * other.x, y * other.y);
	}

	bool operator ==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}
	bool operator !=(const Vector2& other) const
	{
		return !(*this == other);
	}
};
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << "," << other.y;
	return stream;
}

int main()
{
	Vector2 Position(10.0f, 10.0f);
	Vector2 Speed(5.0f, 5.0f);

	Vector2 Result = Position + Speed;
	std::cout << Result << std::endl;
}
