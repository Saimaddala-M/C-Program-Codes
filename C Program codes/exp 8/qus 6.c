#include <stdio.h>

int main()
{
    char str1[100];
    char str2[50];
    char *p1, *p2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);


    for (p1 = str1; *p1 != '\0'; p1++)
    {
        if (*p1 == '\n')
        {
            *p1 = '\0';
            break;
        }
    }

    for (p2 = str2; *p2 != '\0'; p2++)
    {
        if (*p2 == '\n')
        {
            *p2 = '\0';
            break;
        }
    }

    p1 = str1;
    while (*p1 != '\0')
    {
        p1++;
    }

     p2 = str2;
    while (*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';

    printf("Output: %s\n", str1);

    return 0;
}
