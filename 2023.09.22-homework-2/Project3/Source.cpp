#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	if ((a == 0) && (b == 0))
	{
		std::cout << "INF" << std::endl;
	} else
	if ((a == 0) || (b % a != 0) || ((b % a == 0) && (a * d == b * c) && (a != 0)))
	{
		std::cout << "NO" << std::endl;
	} else
	if (((b % a) == 0) && (a * d != b * c))
	{
		std::cout << -b / a << std::endl;
	}
	return EXIT_SUCCESS;
}
