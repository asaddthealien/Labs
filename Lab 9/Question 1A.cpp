#include <stdio.h>

void number(int n) 
{
    for (int i = n; i > 0; i--) {
        printf("o");
    }
}

void lumber1(int n) 
{
    for (int i = n; i > 0; i--) 
	{
        printf("o");
    }
}

int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
	{
        for (int j = n - i; j > 0; j--) 
		{
            printf(". ");
        }
        number(i + 1);
        printf("\n");
    }

    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < i + 2; j++) 
		{
            printf(". ");
        }
        lumber1(n - i);
        printf("\n");
    }

    return 0;
}