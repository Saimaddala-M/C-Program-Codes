#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int count = 0;
    char *ptr;
    printf("Enter a string: ");
    gets(str);  
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    ptr = str;
    while(*ptr != '\0') 
    {
        if(*ptr == ch) 
        {
            count++;
        }
        ptr++;  
    }
    printf("Output: %d\n", count);
    printf("The character '%c' appears %d times in the string.\n", ch, count);
    
    return 0;
}
