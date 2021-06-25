#include"Log.h"

int main()
{
	int x = 5;
	//bool comparisonresult = x == 5;
	//if (comparisonresult)
	if(x==5)
	{
		initLog();
		Log("Hello");
	}

	const char* ptr = "Hello";
	if (ptr != nullptr)
	{
		Log(ptr);
	}
	else
	{
		Log("Pointer Is NULL");
	}
	Log("___________________________");
	for (int i = 0; i < 5; i++)
	{
		if (i > 2)
			continue;
		Log("Hello World");
		std::cout << i << std::endl;
		
	}
	Log("___________________________");
	int a = 0;
	bool condition = true;
	for (; condition; )
	{
		Log("Hello World");
		a++;
		if (!(a < 5))
		{
			condition = false;
		}
	}
	Log("__________________________");
	int b = 0;
	while (b < 5)
	{
		Log("Hello World");
		b++;
	}

}

