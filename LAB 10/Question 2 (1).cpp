#include <stdio.h>
#include <string.h>

void percentprinter(int n, int i)
{
	if(i > 99)
	{
		return;
	}
	else
	{
		i++;
	    float percent = 0;
	    percent =  (i*n)/100;
	    printf("%d percent = %.2f\n", i, percent);
	}
	percentprinter(n ,i);
}


int main()
{
	int n;
	printf("Enter a value to split in percentage: ");
	scanf("%d", &n);
	int i = 0;
	percentprinter(n, i);
	
	return 0;
}
