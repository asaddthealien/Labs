#include <stdio.h>

int main()
{
	int x = 15;
	int num[x];
	int sum = 0;
	
	for(int i = 0; i < x; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &num[i]);
	}
	
	for(int i = 0; i < x; i++)
	{
		sum = sum + num[i];
	}
	printf("Sum: %d", sum);
	
	return 0;
}