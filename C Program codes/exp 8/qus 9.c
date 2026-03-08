#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char *words[20];   // array of pointers to strings
    char *start;
    int count = 0, length = 0;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    ptr = str;

    while (*ptr != '\0')
    {
        // Skip spaces
        while (*ptr == ' ')
            ptr++;

        if (*ptr == '\0')
            break;

        // Mark start of word
        start = ptr;
        length = 0;

        // Find end of word
        while (*ptr != ' ' && *ptr != '\0')
        {
            length++;
            ptr++;
        }

        // Allocate memory for word
        words[count] = (char *)malloc((length + 1) * sizeof(char));

        // Copy word using pointers
        strncpy(words[count], start, length);
        words[count][length] = '\0';

        count++;
    }

    printf("Output:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", words[i]);
    }

    // Free allocated memory
    for (int i = 0; i < count; i++)
    {
        free(words[i]);
    }

    return 0;
}
