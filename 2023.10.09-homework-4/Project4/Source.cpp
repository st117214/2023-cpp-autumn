#include <iostream>
#include <cstdlib>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;
	int m = 0;
	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	m = *(a + 0);

	for (int i = 1; i <= n; ++i)
	{
		if ((*(a + i) > *(a + i - 1)) && *(a + i) > m)
		{
			m = *(a + i);
		}
	}

	std::cout << m;

	free(a);

	return EXIT_SUCCESS;
}
