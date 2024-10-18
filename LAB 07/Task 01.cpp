#include <stdio.h>

int main()
{
	int array[10] = {1,3,5,7,9,11,13,15,17,19};
	printf("Array: { ");
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("}\n");
	int num;
	printf("Enter an integer to search: ");
	scanf("%d", &num);
	
	int x = 0;
	for(int i = 0; i < 10; i++)
	{
		if(array[i] == num)
		{
			printf("Number Found");
			x++;
			break;
		}
	}
		
	if(x == 0)
	{
	    printf("Number not Found");
	}
	
	return 0;	
}