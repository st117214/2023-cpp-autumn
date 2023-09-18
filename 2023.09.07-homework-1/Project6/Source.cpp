#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << (a * (a / b) + b * (b / a)) / (a / b + b / a);
	return 0;
}