#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	int b;
	b = abs(N - 1) + 1;
	int K = (N + 1) * b / 2;
	std::cout << K;
	return 0;
}