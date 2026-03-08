#include <stdio.h>
#include <string.h>

void encrypt(char text[], int key);
void decrypt(char text[], int key);

int main()
{
    char message[100];
    int key, choice;

    printf("Enter a message: ");
    gets(message);

    printf("Enter key (shift value): ");
    scanf("%d", &key);

    printf("\n1. Encrypt\n2. Decrypt\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            encrypt(message, key);
            printf("Encrypted message: %s\n", message);
            break;

        case 2:
            decrypt(message, key);
            printf("Decrypted message: %s\n", message);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
void encrypt(char text[], int key)
{
    int i;
    char ch;

    for (i = 0; text[i] != '\0'; i++)
    {
        ch = text[i];

        if (ch >= 'A' && ch <= 'Z')
            text[i] = (ch - 'A' + key) % 26 + 'A';

        else if (ch >= 'a' && ch <= 'z')
            text[i] = (ch - 'a' + key) % 26 + 'a';
    }
}
void decrypt(char text[], int key)
{
    int i;
    char ch;

    for (i = 0; text[i] != '\0'; i++)
    {
        ch = text[i];

        if (ch >= 'A' && ch <= 'Z')
            text[i] = (ch - 'A' - key + 26) % 26 + 'A';

        else if (ch >= 'a' && ch <= 'z')
            text[i] = (ch - 'a' - key + 26) % 26 + 'a';
    }
}