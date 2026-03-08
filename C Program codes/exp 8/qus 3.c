#include <stdio.h>

int findSubstring(char *str, char *sub)
{
    char *s, *p;
    int index = 0;

    while (*str != '\0')
    {
        s = str;
        p = sub;

        while (*s == *p && *p != '\0')
        {
            s++;
            p++;
        }

        if (*p == '\0')
        {
            return index;
        }

        str++;
        index++;
    }

    return -1;
}

int main()
{
    char str[100];
    char sub[50];
    int result;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);

    sub[strcspn(sub, "\n")] = '\0';

    result = findSubstring(str, sub);

    printf("Output: %d\n", result);

    return 0;
}
