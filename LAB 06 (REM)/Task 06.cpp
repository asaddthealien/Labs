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
				printf("The Fibonacci series upto %d term is\n", num);
				printf("0 1 ");
				
				int i = 1;
				int j = 0;
				while(i + j < num)
				{
					printf("%d ", i + j);
					i = i + j;
					j = i - j;
				}
				break;
			}
		}
	
	}
	
	return 0;
}