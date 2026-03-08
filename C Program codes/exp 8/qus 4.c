#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    char *readPtr, *writePtr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf("%c", &ch);

    readPtr = str;
    writePtr = str;

    while (*readPtr != '\0') 
    {
        if (*readPtr != ch)
        {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++;
    }

    *writePtr = '\0';

    printf("Output: %s\n", str);

    return 0;
}
