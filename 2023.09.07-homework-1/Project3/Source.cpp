#include <iostream>
int main()
{
	long long  N = 0;
	std::cin >> N;
	long long q;
	q = N / 10;
	std::cout << q * (q + 1) * 100 + 25;
	return 0;
}