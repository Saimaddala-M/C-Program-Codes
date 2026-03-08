#include <stdio.h>
int checkIdentical(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;   
        }
        i++;
    }
    return 1;
}
int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (checkIdentical(str1, str2)) {
        printf("Strings are identical.\n");
    } else {
        printf("Strings are not identical.\n");
    }

    return 0;
}
