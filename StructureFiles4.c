#include <stdio.h>

#pragma warning(disable:4996)
struct Car makeCar();

struct Car
{
	char name[100];
	char model[10];
	int yearOfMake;
	int carNumber;
};

int main4_5()
{

	struct Car carsList[10];
	for (int i = 0; i < 10; i++)
	{
		carsList[i] = makeCar();
		printf("The name of the car is: %s\nThe model is: %s\nThe year of make is: %d\nThe car number is: %d", carsList[i].name, carsList[i].model, carsList[i].yearOfMake, carsList[i].carNumber);
	}
	return 0;
}

struct Car makeCar()
{
	
	struct Car c1;
	printf("Please enter car's name, model, year of make and car number please: ");
	scanf("%s %s %d %d", c1.name, c1.model, &c1.yearOfMake, &c1.carNumber);

	return c1;
}