#include<iostream>

class Random
{
public:
	Random(const Random&) = delete;
	static Random& get()
	{
		static Random s_Instance;
		return s_Instance;
	}
	static float Float() { return get().iFloat();}
private:
	float iFloat()
	{
		return m_Member;
	}
	Random() {};
	float m_Member = 0.5f;
};

int main()
{
	float number = Random::get().Float();
	std::cout << number << std::endl;
}