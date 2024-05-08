#include <stdio.h>

/*
    - Nested functions:
        - calling another udf in any udf.

*/

int getSum(int a, int b)
{
    return a + b;
}

int getAvg(int a, int b)
{
    return getSum(a, b) / 2;
}

void main()
{

    printf("Average: %d\n", getAvg(12, 45));
}