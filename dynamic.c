#include<stdio.h>

int main()
{

    // declare dynamic size
    int size;
    printf("give the size for array  : ");
    scanf("%d", &size);

    int a[size];
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("enter array elements at %d position: ",i);
        scanf("%d", &a[i]);
    }
    printf("\n\n======================\n\n");

     for ( i = 0; i < size; i++)
    {
        printf("%d\n1",a[i]);
       
    }

    return 0;
}
