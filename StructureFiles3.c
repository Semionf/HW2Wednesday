#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

void makeFiles();

int main3()
{
	makeFiles(5);
}

void makeFiles(int num)
{
	char str1[40];
	for (int i = 1; i <= num; i++)
	{
		sprintf(str1, "File%d.txt", i);
		FILE* f = fopen(str1, "w");
		for (int i = 0; i < num; i++)
		{
			fputc('*', f);
		}
		fclose(f);
	}
	return 0;
}