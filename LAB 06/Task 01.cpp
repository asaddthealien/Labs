#include <stdio.h>

int main()
{
	int num;
	int factorial = 1;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &num);
	}while (num<0);
	
	for(int i = num; i > 0; i--)
	{
		factorial = factorial * i;
	}      
	printf("Factorial: %d", factorial);
	
	return 0;    
		
}  