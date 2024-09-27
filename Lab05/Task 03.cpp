#include <stdio.h>

int main()
{
	float percentage;
	printf("Enter Percentage: ");
	scanf("%f", &percentage);
	
	(percentage>=90)? printf("Grade: A"):
		(percentage>=80)? printf("grade:B"):
			(percentage>=70)? printf("Grade:C"):
				(percentage>=60)? printf("GradE:D"):
					(percentage<=60)? printf("Grade:F"):
						printf("Invalid Input");
	
	
	return 0;					
}