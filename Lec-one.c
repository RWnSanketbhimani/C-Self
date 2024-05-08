#include <stdio.h>
// TNRN
void sum()
{
    int a, b;
    printf("Enter value of A :");
    scanf("%d", &a);

    printf("Enter value of B :");
    scanf("%d", &b);

    printf("sum = %d\n", a + b);
}

// TNRN
// sub

void sub()
{
    int a, b;
    printf("Enter value of A :");
    scanf("%d", &a);

    printf("Enter value of B :");
    scanf("%d", &b);

    printf("sub = %d\n", a - b);
}

void main()
{
    sum();
    sub();
}
