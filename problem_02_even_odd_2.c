/**
 * Problem Name: Even or Odd 2
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
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
#include <string.h>

int main()
{
    int T, i;
    char n[101];

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 1; i <= T; i++)
    {
        scanf("%s", n);

        int len = strlen(n);
        char last_char = n[len - 1];

        if (last_char == '0' || last_char == '2' || last_char == '4' || last_char == '6' || last_char == '8')
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
