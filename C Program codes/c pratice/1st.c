#include <stdio.h>

int main()
{
    int choice;
    int a, b;

    printf("----- MENU -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division (Quotient and Remainder)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Addition = %d\n", a + b);
            break;

        case 2:
            printf("Subtraction = %d\n", a - b);
            break;

        case 3:
            printf("Multiplication = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
            {
                printf("Quotient = %d\n", a / b);
                printf("Remainder = %d\n", a % b);
            }
            else
            {
                printf("Division by zero is not allowed\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
