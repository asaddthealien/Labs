#include <stdio.h>

int main()
{
	int num;
	
	do
	{
		printf("Enter a Number: ");
		scanf("%d", &num);
		
		if(num < 0)
		{
			printf("no\n");
		}
		else
		{
			printf("That's how you do it  %d", num);
		}
	}while(num<0);
	
	return 0;
	
	
}