#include <stdio.h>

int main()
{
	int array[4][4];
	printf("Enter Subject 1 Score:\n");
	for(int i = 0; i < 1; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &array[i][j]);
			if(array[i][j] < 0)
			{
				array[i][j] = 0;
			}
		}
	}
	printf("Enter Subject 2 Score:\n");
	for(int i = 1; i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &array[i][j]);
			if(array[i][j] < 0)
			{
				array[i][j] = 0;
			}
		}
	}
	printf("Enter Subject 3 Score:\n");
	for(int i = 2; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &array[i][j]);
			if(array[i][j] < 0)
			{
				array[i][j] = 0;
			}
		}
	}
	printf("Enter Subject 4 Score:\n");
	for(int i = 3; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &array[i][j]);
			if(array[i][j] < 0)
			{
				array[i][j] = 0;
			}
		}
	}
	
	for(int i  = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}