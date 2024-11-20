#include <stdio.h>

void bubblesort(int array[], int size)
{
    int swap = 0;
    for(int i = 0; i < size-1; i++)
    {
        if(array[i] > array[i+1])
        {
        int temp = array[i+1];
        array[i+1] = array[i];
        array[i] = temp;
        swap = 1;
        }
    }
    if(swap == 0)
    {
        return;
    }
   
    bubblesort(array, size-1);
   
}
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter Numbers:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }
    bubblesort(numbers, n);
    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}