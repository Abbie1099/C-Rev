#include<iostream>
#include<vector>

struct Vertex
{
	float x, y, z;
	Vertex(float x, float y, float z) :x(this->x), y(this->y), z(this->z) {}

	Vertex(const Vertex& vertex) :x(vertex.x), y(vertex.y), z(vertex.z)
	{ std::cout << "Copied" << std::endl;}
};

std::ostream& operator <<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex> vertices;
	vertices.reserve(3);
	vertices.emplace_back(1, 2, 3);
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);
}
