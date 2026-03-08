#include <stdio.h>

// Function declarations
int isPrime(int n);
void checkPerfectAbundantDeficient(int n);
int isArmstrong(int n);
int isStrong(int n);

int main()
{
    int choice, num;

    do
    {
        printf("\n------ MENU ------\n");
        printf("1. Prime or Not\n");
        printf("2. Perfect / Abundant / Deficient\n");
        printf("3. Armstrong or Not\n");
        printf("4. Strong or Not\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter a number: ");
            scanf("%d", &num);
        }

        switch (choice)
        {
            case 1:
                if (isPrime(num))
                    printf("%d is a Prime number\n", num);
                else
                    printf("%d is NOT a Prime number\n", num);
                break;

            case 2:
                checkPerfectAbundantDeficient(num);
                break;

            case 3:
                if (isArmstrong(num))
                    printf("%d is an Armstrong number\n", num);
                else
                    printf("%d is NOT an Armstrong number\n", num);
                break;

            case 4:
                if (isStrong(num))
                    printf("%d is a Strong number\n", num);
                else
                    printf("%d is NOT a Strong number\n", num);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void checkPerfectAbundantDeficient(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("%d is a Perfect number\n", n);
    else if (sum > n)
        printf("%d is an Abundant number\n", n);
    else
        printf("%d is a Deficient number\n", n);
}
int isArmstrong(int n)
{
    int original = n, sum = 0, r;
    while (n > 0)
    {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    return sum == original;
}
int isStrong(int n)
{
    int original = n, sum = 0, r, fact;
    while (n > 0)
    {
        r = n % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    return sum == original;
}
