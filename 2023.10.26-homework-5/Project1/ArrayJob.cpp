#include "ArrayJob.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

void expendArray(int*& a, int& length)
{
	int* newA = new int[length + 1] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < length; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	++length;
	a = newA;

}
void addElement(int*& a, int& length, int element)
{
	if (a != nullptr)
	{
		expendArray(a, length);
		a[length - 1] = element;
	}
}
bool indexValid(int length, int index)
{
	return (index >= 0 && index < length);
}
void extractElement(int*& a, int& length, int index)
{
	if (indexValid(length, index) == true)
	{
		for (int i = index; i < (length - 1); ++i)
		{
			a[i] = a[i + 1];
		}
		contractArray(a, length);
	}
	else
	{
		std::cout << "Index is not correct" << std::endl;
	}
}
void contractArray(int*& a, int& length)
{
	if (a != nullptr)
	{
		int* newA = new int[length - 1];
		for (int i = 0; i < length - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--length;
	}
}
void ascendingSort(int*& a, int& length)
{
	int min = a[0];
	int index = 0;
	int len = length;
	int* newA = new int[length] { 0 };
	for (int i = 0; i < length; ++i)
	{
			for (int j = 0; j < len; ++j)
			{
				if (a[j] < min)
				{
					min = a[j];
					index = j;
				}
			}
			extractElement(a, len, index);
		newA[i] = min;
		min = a[0];
		index = 0;
	}
	delete[] a;
	a = newA;
}
void turnArray(int*& a, int& length)
{
	int* newA = new int[length] { 0 };
	newA[0] = a[length - 1];
	for (int i = 1; i < length; ++i)
	{
		newA[i] = a[length - (i + 1)];
	}
	delete[] a;
	a = newA;
}
void changeMaxMin(int* a, int length)
{
	int min = a[0];
	int indexm = 0;
	for (int i = 0; i < length; ++i)
	{
		if (a[i] <= min)
		{
			min = a[i];
			indexm = i;
		}
	}
	int max = a[length - 1];
	int indexb = length - 1;
	for (int j = length - 1; j >= 0; --j)
	{
		if (a[j] >= max)
		{
			max = a[j];
			indexb = j;
		}
	}

	a[indexb] = min;
	a[indexm] = max;
}
void extractDuplication(int*& a, int& length)
{
	int index = 0;
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length; ++j)
		{
			if ((a[i] == a[j]) && (i != j))
			{
				index = j;
				extractElement(a, length, index);
			}
		}
	}

}
void addingElements(int*& a, int& length, int n)
{
	srand(time(0));
	
	for (int i = 0; i < n; ++i)
	{
		expendArray(a, length);
		a[length - 1] = rand();
	}
}
