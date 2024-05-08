#include <stdio.h>

void loop(int s, int e)
{
    printf("%d ", s++);
    if (s <= e)
    {
        loop(s, e);
    }
}

int getSum(int n) // 5, 4, 3, 2, 1, 0
{
    if (n < 1)
    {
        return 0;
        //     0
    }
    else
    {
        return n + getSum(n - 1);
        //     5 + getsSum(4)                   =>  5 + 10  =>  15
        //         4 + getSum(3)                =>  4 + 6   =>  10
        //             3 + getSum(2)            =>  3 + 3   =>  6
        //                 2 + getSum(1)        =>  2 + 1   =>  3
        //                     1 + getSum(0)    =>  1 + 0   =>  1
        //                         0            =>  0
    }
}

void main()
{
    printf("In the main...\n");
    loop(1, 10);
    printf("\nSum: %d", getSum(5));
}