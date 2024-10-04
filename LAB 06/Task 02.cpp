#include <stdio.h>

int main()
{
	int num;
	int x = 1;
	int y;
	
	do
	{
		printf("Enter a number: ");
		scanf("%d", &num);
	}while (num<1);
	
	while(x < num)
	{
		y = x % 2;
		if(y==0)
		{
			printf("%d\n", x);
			x++;
		}
		else
		{
		    x++;	
		}

	}
	
	return 0;
}