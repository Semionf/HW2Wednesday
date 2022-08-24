#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void makeStudentList();

struct student
{
	char name[10];
	char symbol[2];
	char code[3];
};

int main7()
{
	makeStudentList();
}

void makeStudentList()
{
	FILE* f = fopen("StudentList.txt", "w");
	struct student studentList[5];
	int len;
	if (!f)
	{
		printf("Error in opening file");
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Please enter student's name, symbol and code: ");
		scanf("%s%s%s", studentList[i].name, studentList[i].symbol, studentList[i].code);
	}
	for (int i = 0; i < 5; i++)
	{
		len = strlen(studentList[i].name);
		for (int j = 0; j < len; j++)
		{
			fputc(studentList[i].name[j], f);
		}
		fputc('\n', f);

		len = strlen(studentList[i].symbol);
		for (int j = 0; j < len; j++)
		{
			fputc(studentList[i].symbol[j], f);
		}
		fputc('\n', f);

		len = strlen(studentList[i].code);
		for (int j = 0; j < len; j++)
		{
			fputc(studentList[i].code[j], f);
		}
		fputc('\n', f);
	}
	fclose(f);
}