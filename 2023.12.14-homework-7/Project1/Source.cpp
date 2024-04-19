#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<iostream>
 
void countWords(FILE* filename, int  words)
{
	FILE* f = fopen("in.txt", "r");

	int words = 0;
	while (!feof(f))
	{
		char c = 0;
		fscanf_s(f, "%c", &c);
		if (c == ' ')
		{
			words++;
		}
	}
	fclose(f);
}

int main(int argc, char** argv)
{
	int words = 0;
	FILE* f = fopen("in.txt", "r");
	countWords(f, words);
	std::cout << words;
	return EXIT_SUCCESS;
}
