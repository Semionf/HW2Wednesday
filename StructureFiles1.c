#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)
void printAsterisk();

int main1()
{
	printAsterisk();
	return 0;
}

void printAsterisk()
{
	FILE* f = fopen("Asterisk.txt", "w");
	if (!f)
	{
		printf("File open error");
		exit(1);
	}
	int num = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < num; j++)
		{
			fputc('*', f);
		}
		fputc('\n', f);
		num++;
	}
	fclose(f);
}