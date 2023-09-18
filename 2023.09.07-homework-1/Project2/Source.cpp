#include <iostream>
int main(int argc, char* argv[])
{
	int N = 0;
	std::cin >> N;
	int b = 0;
	b = abs(N - 1) + 1;
	int K = 0;
    K = (N + 1) * b / 2;
	std::cout << K;
	return 0;
}