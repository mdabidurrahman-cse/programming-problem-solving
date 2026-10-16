/**
 * Problem Name: Problem 12 - Factorial 100 (Trailing Zeros)
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Institution: Delta Computer Science College, Rangpur
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */


#include <stdio.h>

int main(void) {
    int T;
    int i;
    long long int N;
    long long int j;
    long long int zero_count;

    // Read the number of test cases
    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    // Loop through each test case
    for (i = 0; i < T; i++)
    {
        N = 0;
        zero_count = 0;

        // Read the value of N (0 <= N <= 120)
        if (scanf("%lld", &N) != 1)
        {
            break;
        }

        // Count powers of 5 (5, 25, 125, etc.) to find trailing zeros
        for (j = 5; j <= N; j *= 5)
        {
            zero_count += N / j;
        }

        // Print the total trailing zeros on a new line[cite: 7]
        printf("%lld\n", zero_count);
    }

    return 0;
}
