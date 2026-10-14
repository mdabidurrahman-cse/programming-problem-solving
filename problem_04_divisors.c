/**
 * Problem Name: Divisors
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int T, i, N, j;

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        printf("Case %d:", i);

        for (j = 1; j <= N; j++)
        {
            if (N % j == 0)
            {
                printf(" %d", j);
            }
        }
        printf("\n");
    }

    return 0;
}
