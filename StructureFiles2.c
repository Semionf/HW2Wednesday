#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)

void printNumbers();

int main2()
{
	printNumbers();
	return 0;
}

void printNumbers()
{
	FILE* f = fopen("Numbers.txt", "w");
	char ch;
	if (!f)
	{
		printf("File open error");
		exit(1);
	}
	for (int i = 1; i < 5; i++)
	{
		ch = i + '0';
		for (int j = 0; j < 10; j++)
		{
			fputc(ch, f);
		}
		fputc('\n', f);
	}
	fclose(f);
}
