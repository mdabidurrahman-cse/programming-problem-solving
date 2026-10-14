/**
 * Problem Name: Summation
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int T, i, last_digit, first_digit;
    long long N;

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);

        last_digit = N % 10;
        first_digit = 0;

        while (N > 0)
        {
            first_digit = N % 10;
            N /= 10;
        }

        printf("Sum = %d\n", first_digit + last_digit);
    }

    return 0;
}
