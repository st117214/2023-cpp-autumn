#include <iostream>
int main(int argc, char* argv[])
{
	int x = 0;
	std::cin >> x;
	int q = 0;
	while (x > 0)
	{
		if ((x % 10) != 0)
		{
			while (x > 0)
			{
				q = x % 10;
				std::cout << q;
				x = x / 10;
			}
		}
		else
		{
			x = x / 10;
		}
	}
	return EXIT_SUCCESS;
}