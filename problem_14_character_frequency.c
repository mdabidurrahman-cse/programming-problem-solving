/**
 * Problem Name: Problem 14 - (Character Frequency)
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman Fuad
 * Institution: Delta Computer Science College, Rangpur
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */

#include <stdio.h>

int main(void)
{
    // Variable declarations at the beginning of the function
    int T;
    int i;
    int j;
    char source[10005];
    char target_char;
    int count;

    // Read the number of test cases
    if (scanf("%d", &T) != 1)
    {
        return 0;
    }

    // Loop for each test case
    for (i = 1; i <= T; i++)
    {
        // Reset count for the new test case
        count = 0;

        // Read the string and the character safely
        if (scanf(" %[^\n]", source) != 1)
        {
            break;
        }
        if (scanf(" %c", &target_char) != 1)
        {
            break;
        }

        // Count how many times the character appears in the string
        for (j = 0; source[j] != '\0'; j++)
        {
            if (source[j] == target_char)
            {
                count++;
            }
        }

        // Print the result based on whether it was found or not
        if (count > 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", target_char, source, count);
        }
        else
        {
            printf("'%c' is not present\n", target_char);
        }
    }

    return 0;
}
