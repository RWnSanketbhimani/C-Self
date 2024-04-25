#include <stdio.h>

// Print all negative elements:

void main()
{

    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], i;

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements: ");
    // Printing the negatives only
    for (i = 0; i < n; i++)
    {
        // Finding the negatives
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }
}
