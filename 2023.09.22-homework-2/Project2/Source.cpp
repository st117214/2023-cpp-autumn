#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	std::cin >> n;
	std::cin >> a;
	if ((n != 1) && (a != 1))
	{
		std::cout << "YES" << std::endl;
	}
	if ((n == 1) && (a == 1))
	{
		std::cout << "YES" << std::endl;
	}
	if ((n != 1) && (a == 1))
	{
		std::cout << "NO" << std::endl;
	}
	if ((n == 1) && (a != 1))
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}