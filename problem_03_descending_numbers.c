
/**
 * Problem Name: Descending Numbers
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);

        if ((i - 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
