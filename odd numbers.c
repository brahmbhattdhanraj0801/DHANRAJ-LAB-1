#include <stdio.h>

int main() {
    int i;
    int count = 0;

    printf("The first 10 odd numbers are:\n");

    // Loop starts at 1 and increments by 2 to get odd numbers
    for (i = 1; count < 10; i += 2) {
        printf("%d ", i);
        count++; // Keep track of how many numbers have been printed
    }

    printf("\n");
    return 0;
}
