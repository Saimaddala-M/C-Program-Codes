#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    /* i) Right-angled triangle of stars */
    printf("\nRight-angled Triangle of Stars:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    /* ii) Inverted triangle of stars */
    printf("\nInverted Triangle of Stars:\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    /* iii) Pyramid pattern of numbers */
    printf("\nPyramid Pattern of Numbers:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
