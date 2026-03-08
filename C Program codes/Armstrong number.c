#include <stdio.h>

int main() {
    int num, original, r, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
     {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }

    if (sum == original) 
    {
        printf("%d is an Armstrong number.\n", original);
    }
     else 
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
