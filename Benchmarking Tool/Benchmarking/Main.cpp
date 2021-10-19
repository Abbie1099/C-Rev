#include"benchmark.h"

int main()
{
	int a = 0;
	{
		Timer tm;
		for (int i = 0; i < 1000; i++)
		{
			std::cout << a + i << std::endl;
		}
	}
}