#include <iostream>
#include "ArrayJob.h"
#include "ConsoleArray.h"
#include "ConsoleAppMenu.h"

int main(int argc, char* argv[])
{
	std::cout << "Input length of Array" << std::endl;
	int length = 0;
	std::cin >> length;
	int* a = new int[length] { 0 };
	bool exit = false;
	printArrayRandom(a, length);
	std::cout << std::endl;
	while (!exit)
	{   
			printMenu();

		    int choice = 0;
			std::cin >> choice;
      
			switch (choice)
			{
			case 0:
			{
				exit = true;
				break;
			}
			case 1:
			{
				printArray(a, length);
				break;
			}
			case 2:
			{
				int element = 0;
				std::cout << "Input element" << std::endl;
				std::cin >> element;
				addElement(a, length, element);
				break;
			}
			case 3:
			{
				std::cout << "Input index to extract" << std::endl;
				int index = 0;
				std::cin >> index;
				extractElement(a, length, index);
				break;
			}
			case 4:
			{
				ascendingSort(a, length);
				break;
			}
			case 5:
			{
				turnArray(a, length);
				break;
			}
			case 6:
			{
				changeMaxMin(a, length);
				break;
			}
			case 7:
			{
				extractDuplication(a, length);
				break;
			}
			case 8:
			{
				std::cout << "Input number of random elements" << std::endl;
				int n = 0;
				std::cin >> n;
				addingElements(a, length, n);
				break;
			}
			default:
			{
				std::cout << "Unknown command" << std::endl;
				break;
			}
			}
	}
	 
	return EXIT_SUCCESS;
}
