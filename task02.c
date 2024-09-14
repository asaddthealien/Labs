#include <stdio.h>

int main()
{
	int units;
	printf("Enter Electricity Units: ");
	scanf("%d", &units);
	
	float bill;
	
	if(units <= 30)
	{
		bill = units * 0.60;
	}
	else if(units <= 110)	
	{
		bill = (30 * 0.60) + ((units-30) * 0.85); 
	}
	else if(units <= 210)
	{
		bill = (30 * 0.60) + (80 * 0.85) + ((units - 110) * 1.30);
	}
	else if(units > 210)
	{
		bill = (30 * 0.60) + (80 * 0.85) + (100 * 1.30) + ((units  - 210) * 1.60);
	}
	else
	{
		printf("Invalid Input");
	}
	
	float addsurcharge;
	addsurcharge = bill * 0.15;
	
	bill = bill + addsurcharge;
	
	printf("Bill: %.2f", bill);
	
	return 0;

	
	
}