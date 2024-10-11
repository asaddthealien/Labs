#include <stdio.h>

int main()
{
	int x = 30;
	int num[x];
	
	for(int i = 0; i < x; i++)
	{
		printf("Enter a number: ");
		
		scanf("%d", &num[i]);
	}
	
	int minnumber = num[0];
	for(int i = 1; i < x; i++)
	{
		if(num[i] < minnumber)
		{
			minnumber = num[i];
		}
	}
	printf("Minimum number: %d\n", minnumber);
	
	
	int maxnumber = num[0];
	for(int i = 1; i < x; i++)
	{
		if(num[i] > maxnumber)
		{
			maxnumber = num[i];
		}
	}
	printf("Maximum number: %d", maxnumber);
	
	
	
	return 0;
}