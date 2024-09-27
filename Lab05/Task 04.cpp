#include <stdio.h>

int main()
{
	int membership;
	printf("Membership Status(1 for yes/2 for no): ");
	scanf("%d", &membership);
	int amount;
	printf("Enter Amount:");
	scanf("%d", &amount);
	
	(amount>=100 && membership==1)? printf("discount applied"): printf("discount not applied");
	
	return 0;
	
}