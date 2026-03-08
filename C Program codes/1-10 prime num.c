#include <stdio.h>

int main() {
    int i, j, count;

    printf("Prime numbers from 1 to 100 are:\n");

    for (i = 1; i <= 100; i++)
     {
        if (i < 2) continue; 
        count = 0;
        
        for (j = 1; j <= i; j++)
         {
            if (i % j == 0)
             {
                count++;
             }
        }
        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
