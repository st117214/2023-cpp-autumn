#include <iostream>
int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k;
	std::cin >> m;
	std::cin >> n;
	if (k >= n)
	{
		std::cout << m * 2 << std::endl;
	} 
	else if (n * 2 % k == 0)
	{ 
		std::cout << (n * 2 / k) * m << std::endl;
	}
	else
	{
		std::cout << ((n * 2 / k) + 1) * m << std::endl;
	}
	return EXIT_SUCCESS;
}



	







	 