#include <stdio.h>

int main() 
{
    int x = 10;
    int *p;
    int **pp;

    p = &x;
    pp = &p;

    printf("Value of x = %d\n", x);
    printf("Value of x using pointer p = %d\n", *p);
    printf("Value of x using double pointer pp = %d\n", **pp);

    return 0;
}
