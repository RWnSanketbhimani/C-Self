#include <stdio.h>
// TSRN
void sum(int a, int b)
{

    printf("sum = %d\n", a + b);
}
// TNRN
// sub

void sub(int a, int b)
{

    printf("sub = %d\n", a - b);
}

void main()
{

    int a, b;
    printf("Enter value of A :");
    scanf("%d", &a);

    printf("Enter value of B :");
    scanf("%d", &b);

    sum(a, b);
    sub(a, b);
}
