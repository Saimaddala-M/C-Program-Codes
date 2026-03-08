#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
 
    ptr = str;

     while (*ptr != '\0')
    {
        if (*ptr != '\n')
        {
            count[(unsigned char)*ptr]++;
        }
        ptr++;
    }

    printf("Output:\n");

    ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr != '\n' && count[(unsigned char)*ptr] != 0)
        {
            printf("%c: %d\n", *ptr, count[(unsigned char)*ptr]);
            count[(unsigned char)*ptr] = 0;
        }
        ptr++;
    }

    return 0;
}
