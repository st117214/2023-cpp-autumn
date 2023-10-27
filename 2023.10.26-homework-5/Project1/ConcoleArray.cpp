#include<iostream>
#include "ConsoleArray.h"
#include<ctime>
#include<cstdlib>

void printArray(int* a, int length)
{
	if (a == nullptr)
	{
		std::cout << "Empty" << std::endl;
	}
	else
	{
		for (int i = 0; i < length; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
}
void printArrayRandom(int* a, int length)
{
	srand(time(0));

	for (int i = 0; i < length; ++i)
	{
		a[i] = rand();
	}
	for (int j = 0; j < length; ++j)
	{
		std::cout << a[j] << " ";
	}
}