#include <stdio.h>

int main() {
    int matrix[3][3];
   
    printf("Team Score\n");
    for(int i =0; i < 3; i++)
    {
        printf("Enter score for round %d:\n", i+1);
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = j + 1; k < 3; k++)
            {
                if(matrix[j][i] > matrix[k][i])
                {
                int temp = matrix[j][i];
                matrix[j][i] = matrix[k][i];
                matrix[k][i] = temp;
                }
            }
        }
    }
    printf("Resultant Matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   
   

    return 0;
}
