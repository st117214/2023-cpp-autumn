#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int c = n % 10;
	while (n > 9)
	{
		n = n / 10;
		c = c * (n % 10);
	}

	std::cout << c << std::endl;

	return EXIT_SUCCESS;
}
