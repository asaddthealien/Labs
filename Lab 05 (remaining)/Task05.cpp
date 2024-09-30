#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int ans;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	num2 = 1;
	
	ans = num1 & num2;
	
	if(ans==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	
	return 0;
}