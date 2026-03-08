#include <stdio.h>

void reverseWord(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];
    char *wordStart = NULL;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while (*ptr != '\0')
    {
        if (wordStart == NULL && *ptr != ' ' && *ptr != '\n')
        {
            wordStart = ptr;
        }

        if ((wordStart != NULL && (*ptr == ' ' || *ptr == '\n')))
        {
            reverseWord(wordStart, ptr - 1);
            wordStart = NULL;
        }
        if ((wordStart != NULL && (*ptr == ' ' || *ptr == '\n')))
        {
            reverseWord(wordStart, ptr - 1);
            wordStart = NULL;
        }

        ptr++;
    }

    printf("Output: %s", str);

    return 0;
}
