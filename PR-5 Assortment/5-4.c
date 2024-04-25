#include <stdio.h>

// Specific row and column sum

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

    int r_index, r_sum = 0, c_index, c_sum = 0;

    printf("Enter row index: ");
    scanf("%d", &r_index);
    printf("Row elements: ");
    for (i = 0; i < c; i++)
    {
        printf("%d ", a[r_index][i]);
        r_sum += a[r_index][i];
    }
    printf("\nRow sum: %d\n", r_sum);

     printf("Enter col index: ");
    scanf("%d", &c_index);
    printf("column elements: ");
    for (i = 0; i < r; i++)
    {
        printf("%d ", a[c_index][i]);
        c_sum += a[c_index][i];
    }
    printf("\nCol sum: %d\n", c_sum);
}