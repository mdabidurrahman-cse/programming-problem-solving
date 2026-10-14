/**
 * Problem Name: Box 1
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int T, N, i, j, k;

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);

        for (j = 1; j <= N; j++)
        {
            for (k = 1; k <= N; k++)
            {
                printf("*");
            }
            printf("\n");
        }

        // Print a blank line between test cases, but not after the last test case
        if (i < T)
        {
            printf("\n");
        }
    }

    return 0;
}
