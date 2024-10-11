#include <stdio.h>

int main()
{
	int orignalnum, num;
	int sum, digit; 
	printf("Enter a number: ");
	scanf("%d", &orignalnum);
	
	num = orignalnum;
	
	sum = 0;
	while(num > 0)
	{
		digit = num % 10;
		sum = sum + (digit * digit * digit);
		num = num / 10;
	}
	
	if(sum == orignalnum)
	{
		printf("Armstrong number");
	}
	else 
	{
		printf("Not an Armstrong number");
	}
	
	return 0;
}