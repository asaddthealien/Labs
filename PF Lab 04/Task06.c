#include <stdio.h>

int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	int y;
	printf("Enter a number: ");
	scanf("%d", &y);
	
	if(x > y)
	{
		if(x > 100)
		{
			printf("First number is significantly larger");
		}
		else
		{
			printf("First number is larger");	
		}	
	}
	
	if(x < y)
	{
		if(x < 0)
		{
			printf("First number is smaller and negative");
		}
		else
		{
			printf("First number is smaller");
		}
	}
	
	if (x == y)
	{
		printf("Both numbers are equal");
	}
	
	return 0;
}