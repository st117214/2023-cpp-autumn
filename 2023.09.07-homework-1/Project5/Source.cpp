#include <iostream>
int main(int argc, char* argv[])
{
	int n = 109;
	int v = 0;
	int t = 0;
	std::cin >> v;
	std::cin >> t;
	int s = 0;
	s = v * t;
	int r = 0;
	r = s % n;
	std::cout << (r + n) % n + 1 << std::endl;
	return EXIT_SUCCESS;
}

	