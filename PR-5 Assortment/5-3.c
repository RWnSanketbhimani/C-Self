#include <stdio.h>

// Transpose matrix

void main()
{

    int r, c;

    printf("Enter row: ");
    scanf("%d", &r);

    printf("Enter column: ");
    scanf("%d", &c);

    int a[r][c], i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}