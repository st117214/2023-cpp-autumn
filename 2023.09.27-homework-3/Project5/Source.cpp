#include <iostream>
int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int q = 0;
	int f = 0;
	std::cin >> k;
	for (int i = 1; i <= k; ++i)
	{
		q = i;
		n = i % 10;
		q = q / 10;
		while (q > 0)
		{
			n = n * 10 + q % 10;
			q = q / 10;
		}
		if (i == n)
		{
			++f;
		}
	}
	std::cout << f << std::endl;
	return EXIT_SUCCESS;
}