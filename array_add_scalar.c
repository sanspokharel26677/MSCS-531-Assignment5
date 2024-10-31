#include <stdio.h>

#define VECTOR_LENGTH 1000

int main() {
    int i;
    int a[VECTOR_LENGTH], b[VECTOR_LENGTH], result[VECTOR_LENGTH];

    // Initialize arrays with values
    for (i = 0; i < VECTOR_LENGTH; i++) {
        a[i] = i + 1;
        b[i] = VECTOR_LENGTH - i;
    }

    // Scalar addition (one element at a time)
    for (i = 0; i < VECTOR_LENGTH; i++) {
        result[i] = a[i] + b[i];
    }

    // Print the result
    printf("Result of scalar addition:\n");
    for (i = 0; i < VECTOR_LENGTH; i++) {
        printf("%d + %d = %d\n", a[i], b[i], result[i]);
    }

    return 0;
}
