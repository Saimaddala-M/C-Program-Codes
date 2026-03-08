#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *p, *q;
    char temp;
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
   
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);
    for (p = str; p < str + length - 1; p++)
    {
        for (q = p + 1; q < str + length; q++)
        {
            if (*p > *q)
            {
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}
