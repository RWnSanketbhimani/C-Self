#include <stdio.h>

// Finding large from 2D array

void main()
{

    int r, c;

    printf("Enter row: ");
    scanf("%d", &r);

    printf("Enter column: ");
    scanf("%d", &c);

    int a[r][c], i, j, max = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);

            // Finding the max
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("Max: %d\n", max);
}