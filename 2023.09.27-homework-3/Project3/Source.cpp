#include <iostream>
int main(int argc, char* argv[])
{
	int x = 0;
	std::cin >> x;
	int f = 0;
	if (x == 1)
	{
		std::cout << "1" << std::endl;
	}
	else
	{
		for (int i = 1; i * i <= x; ++i)
		{
			if (x % i == 0)
			{
				f = f + 2;
			}
			if (i * i == x)
			{
				--f;
			}
		}
		std::cout << f << std::endl;
	}
	return EXIT_SUCCESS;
}