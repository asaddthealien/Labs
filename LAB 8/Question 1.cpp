#include <stdio.h>

int main()
{
	int array[3][3];
	printf("Enter player 1 score:\n");
	for(int i = 0; i < 1; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	printf("Enter player 2 score:\n");
	for(int i = 1; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	printf("Enter player 3 score:\n");
	for(int i = 2; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	
	int row1sum = 0;
	for(int i = 0; i < 1; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			row1sum = row1sum + array[i][j];
		}
	}
	
	int row2sum = 0;
	for(int i = 1; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			row2sum = row2sum + array[i][j];
		}
	}
	int row3sum = 0;
	for(int i = 2; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			row3sum = row3sum + array[i][j];
		}
	}
	
	int col1sum = 0;
	for(int i = 0; i < 1; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			col1sum = col1sum + array[j][i];
		}
	}
	int col2sum = 0;
	for(int i = 1; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			col2sum = col2sum + array[j][i];
		}
	}
	int col3sum = 0;
	for(int i = 2; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			col3sum = col3sum + array[j][i];
		}
	}
	printf("Row 1 Sum = %d\n", row1sum);
	printf("Row 2 Sum = %d\n", row2sum);
	printf("Row 3 Sum = %d\n", row3sum);
	printf("Column 1 Sum = %d\n", col1sum);
	printf("Column 2 Sum = %d\n", col2sum);
	printf("Column 3 Sum = %d\n", col3sum);
	return 0;
}