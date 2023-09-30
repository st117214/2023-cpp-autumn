#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int p = 1;
	int o = 0;
	int s = 0;
	if (n == 1)
	{
		std::cout << "1";
	}
	else
	{
		while (n > 1)
		{
			s = o + p;
			o = p;
			p = s;
			n = n - 1;
		}
		std::cout << s << std::endl;
	}
	return EXIT_SUCCESS;
}