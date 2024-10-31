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

    // Simulated vector addition using loop unrolling
    for (i = 0; i < VECTOR_LENGTH; i += 4) {
        result[i] = a[i] + b[i];
        result[i + 1] = a[i + 1] + b[i + 1];
        result[i + 2] = a[i + 2] + b[i + 2];
        result[i + 3] = a[i + 3] + b[i + 3];
    }

    // Print the result
    printf("Result of unrolled vector addition:\n");
    for (i = 0; i < VECTOR_LENGTH; i++) {
        printf("%d + %d = %d\n", a[i], b[i], result[i]);
    }

    return 0;
}
