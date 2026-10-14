/**
 * Problem Name: Square Number
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int T, i;
    long long num;
    double sq_root;

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 0; i < T; i++)
    {
        scanf("%lld", &num);

        sq_root = sqrt(num);

        // Using integer casting comparison to check if the square root is a whole number
        if ((long long)sq_root * (long long)sq_root == num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
