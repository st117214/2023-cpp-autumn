#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int b = 0;
	b = abs(n - 1) + 1;
	int k = 0;
    k = (n + 1) * b / 2;
	std::cout << k << std::endl;
	return EXIT_SUCCESS;
}