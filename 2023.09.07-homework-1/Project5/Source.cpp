#include <iostream>
int main()
{
	int V, T, N = 109;
	std::cin >> V >> T;
	int S = V * T;
	int R = S % N;
	std::cout << (R + N) % N + 1;
	return 0;
}

	