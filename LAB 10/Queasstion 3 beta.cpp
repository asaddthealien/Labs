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

void carinputdata(struct Car cars[], int i, int n) 
{
	if (i >= n) return;
	printf("Enter detail of car %d\n", i + 1);
	printf("Make: ");
	scanf("%s", cars[i].make);
	printf("Model: ");
	scanf("%s", cars[i].model);
	printf("Year: ");
	scanf("%d", &cars[i].year);
	printf("Price: ");
	scanf("%d", &cars[i].price);
	printf("Mileage: ");
	scanf("%d", &cars[i].mileage);
	carinputdata(cars, i + 1, n);
}

void cardisplaydata(struct Car cars[], int n, int i) 
{
	if (i >= n) 
	return;
	if (cars[i].year == 0) 
	{
		printf("No cars to display.\n");
		return;
	}
	printf("Detail of car %d\n", i + 1);
	printf("Make: %s\n", cars[i].make);
	printf("Model: %s\n", cars[i].model);
	printf("Year: %d\n", cars[i].year);
	printf("Price: %d\n", cars[i].price);
	printf("Mileage: %d\n", cars[i].mileage);
	cardisplaydata(cars, n, i + 1);
}

void searchcarbymodel(struct Car cars[], int n, char model[]) 
{
	int found = 0;
	for (int i = 0; i < n; i++) 
	{
		if (strcmp(model, cars[i].model) == 0) {
			printf("Detail of car %d\n", i + 1);
			printf("Make: %s\n", cars[i].make);
			printf("Model: %s\n", cars[i].model);
			printf("Year: %d\n", cars[i].year);
			printf("Price: %d\n", cars[i].price);
			printf("Mileage: %d\n", cars[i].mileage);
			found = 1;
			break;
		}
	}
	if (!found) 
	printf("No cars found with model %s.\n", model);
}

void searchcarbymake(struct Car cars[], int n, char make[]) 
{
	int found = 0;
	for (int i = 0; i < n; i++) 
	{
		if (strcmp(make, cars[i].make) == 0) 
		{
			printf("Detail of car %d\n", i + 1);
			printf("Make: %s\n", cars[i].make);
			printf("Model: %s\n", cars[i].model);
			printf("Year: %d\n", cars[i].year);
			printf("Price: %d\n", cars[i].price);
			printf("Mileage: %d\n", cars[i].mileage);
			found = 1;
			break;
		}
	}
	if (!found) 
	printf("No cars found with make %s.\n", make);
}

int main() 
{
	int exit = 1;
	struct Car cars[100];
	int n = 0;

	while (exit) 
	{
		int choice;
		printf("\nWelcome to Car Management System\n1. Add car details\n2. Display car details\n3. Search car\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) 
		{
			case 1: {
				printf("Enter the number of cars you want to add the details of: ");
				scanf("%d", &n);
				carinputdata(cars, 0, n);
				break;
			}
			case 2: {
				cardisplaydata(cars, n, 0);
				break;
			}
			case 3: {
				int choice1;
				printf("How do you want to search the cars\n1. By model\n2. By make\n");
				printf("Enter choice: ");
				scanf("%d", &choice1);
				if (choice1 == 1) 
				{
					char model[50];
					printf("Enter model: ");
					scanf("%s", model);
					searchcarbymodel(cars, n, model);
				} 
				else if (choice1 == 2) 
				{
					char make[50];
					printf("Enter make: ");
					scanf("%s", make);
					searchcarbymake(cars, n, make);
				}
				break;
			}
			case 4: {
				exit = 0;
				break;
			}
			default:
				printf("Invalid choice. Please try again.\n");
		}
	}
	return 0;
}
