#include <stdio.h>

int main()
{
    int num1;
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &num1);
    
    
    n = 0;
    
    if(num1 & 1) n=n+1;
    num1 = num1 >> 1;
    if(num1 & 1) n=n+1;
    num1 = num1 >> 1;
    if(num1 & 1) n=n+1;
    num1 = num1 >> 1;
    if(num1 & 1) n=n+1;
    num1 = num1 >> 1;
    if(num1 & 1) n=n+1;
    num1 = num1 >> 1;
    
    
    printf("Number of 1s: %d\n", n);
    
    return 0;
    
    
}