/**
 * Problem Name: Small to Large
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int T, n1, n2, n3, temp, kase;

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (kase = 1; kase <= T; kase++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);

        // Sorting three numbers using swapping logic
        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n1 > n3)
        {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if (n2 > n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
    }

    return 0;
}
