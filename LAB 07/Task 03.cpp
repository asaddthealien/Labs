#include <stdio.h>

int main()
{
	int x = 12;
	int array[x];
	for(int i = 0; i < x; i++)
	{
		printf("Enter a Number: ");
		scanf("%d", &array[i]);
	}
	printf("Input Array: ");
	for(int i = 0; i < x; i++)
	{
		printf("%d ", array[i]);
	}
	
	int y = 6;
	int pairsum[y];
	printf("\nPair Sum Array: ");
	for(int i = 0; i < x; i+=2)
	{
		pairsum[i] = array[i] + array[i+1];
		printf("%d ", pairsum[i]);
	}
	
	return 0;
}