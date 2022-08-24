#include <stdio.h>

#pragma warning (disable: 4996)
struct student
{
	char name[10];
	char symbol[3];
	char code[4];
};

void getInfoFromFile();

int main()
{
	getInfoFromFile();
}

void getInfoFromFile()
{
	struct student studentList[5];
	int j = 0;
	FILE* f = fopen("StudentList.txt", "r");
	char ch = 0;
	for (int i = 0; i < 5; i++)
	{
		while (ch != '\n')
		{
			ch = fgetc(f);
			if (ch != '\n')
			{
				studentList[i].name[j] = ch;
				j++;
			}
		}
		j = 0;
		ch = 0;
		while (ch != '\n')
		{
			ch = fgetc(f);
			if (ch != '\n')
			{
				studentList[i].symbol[j] = ch;
				j++;
			}
		}
		ch = 0;
		while (ch != '\n' || ch != EOF)
		{
			ch = fgetc(f);
			if (ch != '\n' || ch != EOF)
			{
				studentList[i].code[j] = ch;
				j++;
			}
		}
		ch = 0;
	}
}