#include <stdio.h>

int main()
{
	int x = 20;
	int num[x];
	
	for(int i = 0; i < x; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &num[i]);
	}
	
	printf("The reversed array is:\n");
	for(int i = x - 1; i >= 0; i--)
	{
		printf("%d\n", num[i]);
	}
	
	
	
	return 0;
}