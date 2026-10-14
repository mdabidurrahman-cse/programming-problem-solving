/**
 * Problem Name: Number Counting
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    int T, i, count, j;
    char line[100000];

    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    for (i = 0; i < T; i++)
    {
        scanf(" %[^\n]", line);

        count = 0;

        for (j = 0; line[j] != '\0'; j++)
        {
            // If the current character is not a space
            // and the next character is either a space or the end of the line
            if (line[j] != ' ' && (line[j + 1] == ' ' || line[j + 1] == '\0'))
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
