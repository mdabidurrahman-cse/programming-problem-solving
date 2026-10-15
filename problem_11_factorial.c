/**
 * Problem Name: Factorial
 * Book      : 52 Programming Problems & Solutions
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int T, i, j, N;
    long long int factorial;

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);

        factorial = 1;

        for (j = 2; j <= N; j++)
        {
            factorial *= j;
        }

        printf("%lld\n", factorial);
    }

    return 0;
}
