#include <iostream>
#include <cstdlib>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;
	int u = 0;
	int m = 0;
	int bn = 0;
	int mn = 0;
	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	m = *(a + 0);

	for (int i = 1; i <= n; ++i)
	{
		if ((*(a + i) >= *(a + i - 1)) && *(a + i) >= m)
		{
			m = *(a + i);
			bn = i;
		}
	}

	u = *(a + n - 1);

	for (int i = n - 1; i > 0; --i)
	{
		if ((*(a + i) >= *(a + i - 1)) && *(a + i - 1) <= u)
		{
			u = *(a + i - 1);
			mn = i - 1;
		}
	}
	
	*(a + bn) = u;
	*(a + mn) = m;


	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}

	free(a);

	return EXIT_SUCCESS;
}
