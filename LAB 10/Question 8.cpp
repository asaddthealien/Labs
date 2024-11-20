#include <stdio.h>

void print(int array[], int size, int i)
{
    i++;
    if(i >= size)
    {
        return;
    }
   
    printf("%d ", array[i]);
   
    print(array, size, i);
   
}
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int numbers[n];
    int i = -1;
    printf("Enter Numbers:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Printing array using recursion\n");
    print(numbers, n, i);
    return 0;
}