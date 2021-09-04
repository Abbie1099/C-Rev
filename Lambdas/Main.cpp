#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

void forEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = {1, 2, 3, 4, 5, 6};
	int a = 5;
	auto lambda = [=](int value)
		mutable
	{
		 a = 6;
		 std::cout << a << " Value:" << value << std::endl;
	};
	forEach(values, lambda);
}