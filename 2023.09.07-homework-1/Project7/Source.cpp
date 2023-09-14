#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	std::cout << "The next number for the number " << N << " is " << N + 1 << "." << std::endl;
	std::cout << "The previous number for the number " << N << " is " << N - 1 << ".";
	return 0;
}