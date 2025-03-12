#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if at least one number is provided
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ...\n", argv[0]);
        return 1;
    }

    // Allocate dynamic memory for the numbers array
    int count = argc - 1;
    int *numbers = malloc(count * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Convert command-line arguments to integers using a for-loop
    for (int i = 0; i < count; i++) {
        numbers[i] = atoi(argv[i + 1]);
    }

    // Compute and display the square of each number
    for (int i = 0; i < count; i++) {
        int square = numbers[i] * numbers[i];
        printf("Number: %d, Square: %d\n", numbers[i], square);
    }

    // Free the allocated memory
    free(numbers);
    return 0;
}
