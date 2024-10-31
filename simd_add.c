#include <immintrin.h>
#include <stdio.h>

#define VECTOR_LENGTH 1000

int main() {
    int i;
    int a[VECTOR_LENGTH], b[VECTOR_LENGTH], result[VECTOR_LENGTH];

    // Initialize arrays
    for (i = 0; i < VECTOR_LENGTH; i++) {
        a[i] = i + 1;
        b[i] = VECTOR_LENGTH - i;
    }

    // Perform vector addition using AVX
    for (i = 0; i < VECTOR_LENGTH; i += 8) {
        // Load 8 elements from each array into AVX registers
        __m256i vec_a = _mm256_loadu_si256((__m256i*)&a[i]);
        __m256i vec_b = _mm256_loadu_si256((__m256i*)&b[i]);

        // Perform element-wise addition
        __m256i vec_result = _mm256_add_epi32(vec_a, vec_b);

        // Store the result back into the result array
        _mm256_storeu_si256((__m256i*)&result[i], vec_result);
    }

    // Print part of the result for verification
    printf("Result of SIMD vector addition:\n");
    for (i = 0; i < 8; i++) {
        printf("%d + %d = %d\n", a[i], b[i], result[i]);
    }

    return 0;
}
