#include <iostream>

void Rehanoi(int n, int from, int to)
{
	if (n > 0)
	{
		if ((from == to - 1) || (from == 3 && to == 1))
		{
			int res = 6 - from - to;
			Rehanoi(n - 1, from, res);
			std::cout << n << " " << from << " " << to << std::endl;
            Rehanoi(n - 1, res, to);
		}
		else
		{
			int res = 6 - from - to;
			Rehanoi(n - 1, from, to);
			std::cout << n << " " << from << " " << res << std::endl;
			Rehanoi(n - 1, to, from);
			std::cout << n << " " << res << " " << to << std::endl;
			Rehanoi(n - 1, from, to);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	Rehanoi(n, 1, 3);

	return EXIT_SUCCESS;
}
