#include <iostream>
int main(int argc, char* argv[])
{
	int N = 109;
	int V = 0;
	int T = 0;
	std::cin >> V >> T;
	int S = V * T;
	int R = S % N;
	std::cout << (R + N) % N + 1;
	return 0;
}

	