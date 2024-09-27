#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter angle 1:");
	scanf("%d", &a);
	printf("Enter angle 2:");
	scanf("%d", &b);
	printf("Enter angle 3:");
	scanf("%d", &c);
	
	if(a+b+c == 180 && a>=0 && b>=0 && c>=0)
	{
		printf("Right angle triangle");
	}
	else{
		printf("not a right angle triangle");
	}
	
	return 0;
	
}