#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (n % 10 == 0)
	{
		std::cout << n << " " << "bochek" << std::endl;
	}
	if (((n % 10) == 1) && ((n % 100) != 11))
	{
		std::cout << n << " " << "bochka" << std::endl;
	}
	if (((n % 10) >= 2) && ((n % 10) <= 4) && ((n % 100) != 12) && ((n % 100) != 13) && ((n % 100) != 14))
	{
		std::cout << n << " " << "bochki" << std::endl;
	}
	if (((n % 100) >= 11) && ((n % 100) <= 14))
	{
		std::cout << n << " " << "bochek" << std::endl;
	}
	if (((n % 10) >= 5) && ((n % 10) <= 9))
	{
		std::cout << n << " " << "bochek" << std::endl;
	}
	return EXIT_SUCCESS;
}
