#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if ((a <= b) && (a <= c))
	{
		if (b <= c)
		{
			std::cout << a << " " << b << " " << c;
			return EXIT_SUCCESS;
		}
		else
		{
			std::cout << a << " " << c << " " << b;
			return EXIT_SUCCESS;
		}
	}
	if ((b <= a) && (b <= c))
	{
		if (a <= c)
		{
			std::cout << b << " " << a << " " << c;
			return EXIT_SUCCESS;
		}
		else
		{
			std::cout << b << " " << c << " " << a;
			return EXIT_SUCCESS;
		}
	}
	if ((c <= a) && (c <= b))
	{
		if (a <= b)
		{
			std::cout << c << " " << a << " " << b;
			return EXIT_SUCCESS;
		}
		else
		{
			std::cout << c << " " << b << " " << a;
			return EXIT_SUCCESS;
		}
	}
}



		
		
	

		    
