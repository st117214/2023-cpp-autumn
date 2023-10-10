#include <iostream>
#include <cstdlib>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) < 0)
		{
			if (i + 1 < n)
			{
				for (int j = i + 1; j < n - 1; ++j)
				{
					*(a + i) = *(a + j);
					std::cout << *(a + i) << " ";
				}
				--n;
			}
			else
			{
				--n;
			}
		}
	}

	free(a);

	return EXIT_SUCCESS;
}

