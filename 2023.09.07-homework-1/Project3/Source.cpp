#include <iostream>
int main(int argc, char* argv[])
{
	long long  n = 0;
	std::cin >> n;
	long long q = 0;
	q = n / 10;
	std::cout << q * (q + 1) * 100 + 25 << std::endl;
	return EXIT_SUCCESS;
}