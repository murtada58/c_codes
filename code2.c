#include <stdio.h>
int a = 5;      // Global variable

void main()
{
    {
        int a = 101;
        printf("Inner: %d\n", a);
    }
    printf("\nOuter: %d", a);
}
