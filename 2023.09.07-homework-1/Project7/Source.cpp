#include <iostream>
int main(int argc, char* argv[])
{
	int N = 0;
	std::cin >> N;
	std::cout << "The next number for the number " << N << " is " << N + 1 << "." << std::endl;
	std::cout << "The previous number for the number " << N << " is " << N - 1 << "." << std::endl;
	return 0;
}