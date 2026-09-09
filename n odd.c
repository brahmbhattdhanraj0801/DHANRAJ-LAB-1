#include <stdio.h>

int main() {
    int n, i;

    // Ask the user to input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d odd numbers are:\n", n);

    // Loop to print first n odd numbers
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

    return 0;
}

