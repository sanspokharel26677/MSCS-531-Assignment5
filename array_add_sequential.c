#include <stdio.h>

#define ARRAY_SIZE 100000

int main() {
    int a[ARRAY_SIZE], b[ARRAY_SIZE], result[ARRAY_SIZE];
    
    // Initialize arrays
    for (int i = 0; i < ARRAY_SIZE; i++) {
        a[i] = i + 1;
        b[i] = ARRAY_SIZE - i;
    }

    // Sequential element-wise addition
    for (int i = 0; i < ARRAY_SIZE; i++) {
        result[i] = a[i] + b[i];
    }

    // Output a sample of results
    printf("Result of sequential addition:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d + %d = %d\n", a[i], b[i], result[i]);
    }

    return 0;
}
