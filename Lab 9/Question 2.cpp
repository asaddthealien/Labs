#include <stdio.h>

int main()
{
	int nuts, bolts, washers;
	printf("Number of Bolts: ");
	scanf("%d", &bolts);
	printf("Number of Nuts: ");
	scanf("%d", &nuts);
	printf("Number of Washers: ");
	scanf("%d", &washers);
	printf("\nOrder Check: ");
	if(nuts < bolts)
	{
		printf("too few nuts ");
	}
	if(washers*2 < bolts)
	{
		printf("too few washers");
	}
	if(nuts >= bolts && washers*2 >= bolts)
	{
		printf("Order is Ok");
	}
	
	int total; 
	total =  bolts * 5 + nuts * 3 + washers * 1;
	printf("\nTotal Cost :  %d", total);
	
	return 0;
}