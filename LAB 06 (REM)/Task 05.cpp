#include <stdio.h>

int main()
{
	int num;
	int x;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num == 0 || num == 1)
	{
		printf("Not a prime number");
	}
	else
	{
		for(int i = 2; i < num; i++)
		{
			x = num % i;
			
			if(x == 0)
			{
				printf("Not a prime number");
				break;
			}
			else
			{
				printf("Prime Number\n");
				break;
			}
		}
	
	}
	
	return 0;
}