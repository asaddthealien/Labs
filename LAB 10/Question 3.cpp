#include <stdio.h>
#include <string.h>

struct Car
{
	char model[50];
	char make[50];
	int year;
	int price;
	int mileage;
};

void carinput(struct Car cars[], int i, int n)
{
	if(i >= n)
	{
		return;
	}
	i++;
	printf("Make: ");
	scanf("%s", cars[i].make);
	printf("\nModel: ");
	scanf("%s", cars[i].model);
	printf("\nYear: ");
	scanf("%d", &cars[i].year);
	printf("\nPrice: ");
	scanf("%d", &cars[i].price);
	printf("\nMileage: ");
	scanf("%d", &cars[i].mileage);
	carinput(cars, i, n);
}

int main()
{
	int i = -1;
	int n;
	scanf("%d", &n);
	struct Car cars[n];
	carinput(cars, i , n);
}
