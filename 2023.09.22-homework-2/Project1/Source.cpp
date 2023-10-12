#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}
