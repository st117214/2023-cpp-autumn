#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a = 0;
	std::cin >> a;
	char c = 0;
	
    c == ((n == 1) == (a == 1)) ? "YES" : "NO";
	std::cout << c;

	return EXIT_SUCCESS;
}
