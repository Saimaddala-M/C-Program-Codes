#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    char *left, *right;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    left = str;
    right = str + strlen(str) - 1;

    while (left < right)
    {
        if (!isalnum(*left))
        {
            left++;
            continue;
        }

        if (!isalnum(*right))
        {
            right--;
            continue;
        }

        if (tolower(*left) != tolower(*right))
        {
            printf("The string is NOT a palindrome\n");
            return 0;
        }

        left++;
        right--;
    }

    printf("The string is a palindrome\n");
    return 0;
}
