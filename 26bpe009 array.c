#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp, choice;

    // Accept 5 values from the user
    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ask user for sorting preference
    printf("\nEnter 1 for Ascending order\n");
    printf("Enter 2 for Descending order\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Sorting logic using Bubble Sort
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (choice == 1) {
                // Ascending order condition
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else if (choice == 2) {
                // Descending order condition
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    // Display the sorted array
    if (choice == 1 || choice == 2) {
        printf("\nSorted array:\n");
        for (i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("\nInvalid choice! Please run the program again.\n");
    }

    return 0;
}
