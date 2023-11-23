#include <iostream>

void fhanoi(int n, int from, int to)
{
	if (n > 0)
	{
		int res = 6 - from - to;
		if (n == 1)
		{
			std::cout << n << " " << from << " " << to << std::endl;
		}
		else
		{
			fhanoi(n - 1, from, to);
			std::cout << n << " " << from << " " << res << std::endl;
			fhanoi(n - 1, to, from);
			std::cout << n << " " << res << " " << to << std::endl;
			fhanoi(n - 1, from, to);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	fhanoi(n, 1, 3);

	return EXIT_SUCCESS;
}
