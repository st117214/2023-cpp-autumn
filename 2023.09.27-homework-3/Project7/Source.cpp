#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int q = 1;
	if (n == 1)
	{
		std::cout << "0" << std::endl;
	}
	else
	{
		for (int k = 1; k > 0; ++k)
		{
			q = q * 2;
			if (q >= n)
			{
				std::cout << k << std::endl;
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}