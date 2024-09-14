#include <stdio.h>

int main()
{
	float cost;
	float discount;
	float finalamount;
	
	
	printf("Enter amount: ");
	scanf("%f", &cost);
	
	if(cost < 1500)
	// 7% Discount
	{
		discount = cost * 0.07;
		finalamount = cost - discount;
		{
			printf("Orignal Amount: %.2f\n", cost);
			printf("Discount: %.2f\n", discount);
			printf("Final Amount: %.2f\n", finalamount);
		}
	}
	
	else if(cost >= 1500 && cost < 3000)
	// 12% Discount
	{
		discount = cost * 0.12;
		finalamount = cost - discount;
		{
			printf("Orignal Amount: %.2f\n", cost);
			printf("Discount: %.2f\n", discount);
			printf("Final Amount: %.2f\n", finalamount);
		}
		
	}
	
	else if(cost >= 3000 && cost < 5000)
	// 22% Discount
	{
		discount = cost * 0.22;
		finalamount = cost - discount;
		{
			printf("Orignal Amount: %.2f\n", cost);
			printf("Discount: %.2f\n", discount);
			printf("Final Amount: %.2f\n", finalamount);
		}
	
	}
	
	else if(cost >= 5000)
	// 30% Discount
	{
		discount = cost * 0.30;
		finalamount = cost - discount;
		{
			printf("Orignal Amount: %.2f\n", cost);
			printf("Discount: %.2f\n", discount);
			printf("Final Amount: %.2f\n", finalamount);
		}
	}
	
	else 
	{
		printf("Invalid Input");
	}
	
	return 0;
}