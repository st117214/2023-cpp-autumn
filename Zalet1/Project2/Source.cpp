#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (n > 0)
	{
		std::cout << n << " ";
		while (n > 0)
		{
			n = n - 1;
			std::cout << n << " ";
		}
	}
	else
	{
		std::cout << n << " ";
		while (n < 0)
		{
			n = n + 1;
			std::cout << n << " ";
		}
	}
	return EXIT_SUCCESS;
}
