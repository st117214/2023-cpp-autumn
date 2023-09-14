#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << (a * (a / b) + b * (b / a)) / (a / b + b / a);
	return 0;
}