#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter the value of N
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate the input (Natural numbers start from 1)
    if (n <= 0) {
        printf("Please enter a valid positive number.\n");
    } else {
        printf("The first %d natural numbers are:\n", n);

        // Loop from 1 up to n and print each number
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
