#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

struct student
{
	char name[10];
	char symbol[2];
	char code[3];
};

void saveStructInFile();

int main6()
{
	saveStructInFile();
}

void saveStructInFile() {
	struct student s1;
	FILE* f = fopen("Student.txt", "w");
	int len;
	if (!f)
	{
		printf("File cannot open");
		exit(1);
	}
	printf("Please enter Student's name, Student's symbol, Student's code:");
	scanf("%s%s%s", s1.name, s1.symbol, s1.code);

	len = strlen(s1.name);
	for (int i = 0; i < len; i++)
	{
		fputc(s1.name[i], f);
	}
	fputc(' ', f);
	len = strlen(s1.symbol);
	for (int i = 0; i < len; i++)
	{
		fputc(s1.symbol[i], f);
	}
	fputc(' ', f);
	len = strlen(s1.code);
	for (int i = 0; i < len; i++)
	{
		fputc(s1.code[i], f);
	}
	fclose(f);
}