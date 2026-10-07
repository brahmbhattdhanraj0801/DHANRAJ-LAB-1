#include <stdio.h>

int main() {
    int values[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Printing the 4th, 7th, and 9th values
    // Using indices 3, 6, and 8 since array indexing starts at 0
    printf("\n4th value: %d\n", values[3]);
    printf("7th value: %d\n", values[6]);
    printf("9th value: %d\n", values[8]);

    return 0;
}
