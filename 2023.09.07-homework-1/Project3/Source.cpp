#include <iostream>
int main(int argc, char* argv[])
{
	long long  N = 0;
	std::cin >> N;
	long long q;
	q = N / 10;
	std::cout << q * (q + 1) * 100 + 25;
	return 0;
}