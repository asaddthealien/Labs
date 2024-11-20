#include <stdio.h>

int digitsum(int number)
{
    if(number == 0)
    {
        return 0;
    }
    int digit = number % 10;
    return digit + digitsum(number/10);
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of Digits: %d", digitsum(num));

    return 0;
}