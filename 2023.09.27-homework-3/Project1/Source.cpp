#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int f = 0;
	if (n == 1)
	{
		std::cout << n << std::endl;
	}
	else
	{
		for (int g = 1; g > 0; ++g)
		{
			int q = g;
			while ((q > 0) )
			{
				std::cout << g << " ";
				--q;
				++f;
				if (n == f)
				{
					break;
				}
			}
			if (n == f)
			{
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}