/**
 * Problem Name: Even or Odd 1
 * Book       : 52 Programming Problems & Solutions
 * Author     : Md. Abidur Rahman
 * Language   : C (C99 Standard)
 * Judge      : Dimik Online Judge
 *
 * Sample Input:
 * 3
 * 100
 * 0
 * 1111
 *
 * Sample Output:
 * even
 * even
 * odd
 */

#include <stdio.h>

int main(void)
{
    int T = 0;
    int i = 0;
    int n = 0;

    if (scanf("%d", &T) != 1)
    {
        return 1;
    }

    for (i = 1; i <= T; i++)
    {
        if (scanf("%d", &n) == 1)
        {
            if (n % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}
