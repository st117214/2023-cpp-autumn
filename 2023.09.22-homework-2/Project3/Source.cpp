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
	int x = 0;
	if ((a == 0) && (b == 0))
	{
		std::cout << "INF" << std::endl;
	}
	if (((a == 0) && (b != 0)) || (((b % a) != 0) && ((c * (-b / a) + d) == 0)) || ((b % a) != 0) || (((b % a) == 0) && ((c * (-b / a) + d) == 0)))
	{
		std::cout << "NO" << std::endl;
	}
	if (((b % a) == 0) && ((c * (-b / a) + d) != 0) && (a != 0))
	{
		std::cout << -b / a << std::endl;
	}
	if ((b == 0) && (d != 0))
	{
		x = 0;
		std::cout << x << std::endl;
	}
	return EXIT_SUCCESS;
}

	







