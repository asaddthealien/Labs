#include <stdio.h>

int main()
{
	int size = 10;
	int array[size];
	for(int i = 0; i < size; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &array[i]);
	}
	printf("Before: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	
	int y = array[0];
	for(int i = 0; i < size - 1; i++)
	{
		array [i] = array[i + 1];
	}
    array[9] = y;
	printf("\nAfter: ");
	for(int i = 0;  i < size; i++)
	{
		printf("%d ", array[i]);
	}
	
	return 0;	
}
	