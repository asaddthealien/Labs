#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PhoneNumber{
	int areacode;
	int exchange;
	int number;
};

int main()
{
	struct PhoneNumber phno1, phno2;
	phno1.areacode = 123;
	phno1.exchange = 345;
	phno1.number = 4567;
	printf("Enter your area code: ");
	scanf("%d", &phno2.areacode);
	printf("Enter your Exchange Code: ");
	scanf("%d", &phno2.exchange);
	printf("Enter your number: ");
	scanf("%d", &phno2.number);
	
	printf("My number is: (%d)%d-%d\n", phno1.areacode,phno1.exchange,phno1.number);
	printf("Your number is: (%d)%d-%d\n", phno2.areacode,phno2.exchange,phno2.number);
	return 0;
}