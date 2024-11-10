#include <stdio.h>

int main() 
{
    int m, n;
    printf("Rows: ");
    scanf("%d", &m);
    printf("Columns: ");
    scanf("%d", &n);
    int matrix1[m][n];
    int matrix2[m][n];
    printf("Enter data for matrix 1:\n");
    for(int i =0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter data for matrix 2:\n");
    for(int i =0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Resultant matrix:\n");
    for(int i =0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
