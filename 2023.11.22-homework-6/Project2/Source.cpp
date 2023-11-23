#include <iostream>

void Remhanoi(int n, int from, int to)
{
	if (n > 0)
	{
		if (from + to == 4)
		{
			Remhanoi(n, from, 2);
			Remhanoi(n, 2, to);
		}
		else
		{
			int res = 6 - from - to;
			Remhanoi(n - 1, from, res);
			std::cout << n << " " << from << " " << to << std::endl;
			Remhanoi(n - 1, res, to);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	Remhanoi(n, 1, 3);

	return EXIT_SUCCESS;
}
