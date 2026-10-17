/**
 * Problem Name: Divisors
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */


#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    int i;
    int j;
    int k;
    char s[256];
    char words[15][25];
    int word_count;
    int counts[15];
    char *token;
    long long int numerator_fact;
    long long int denominator_fact;
    long long int fact;
    long long int total_arrangements;

    // Read the number of test cases
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    // Loop through each test case using a traditional for loop
    for (i = 0; i < t; i++) {
        // Read the sentence line safely, clearing any leftover newline
        if (scanf(" %[^\n]", s) != 1) {
            break;
        }

        word_count = 0;
        numerator_fact = 1;
        denominator_fact = 1;

        // Extract words separated by spaces
        token = strtok(s, " ");
        while (token != NULL && word_count < 15) {
            strcpy(words[word_count], token);
            counts[word_count] = 1;
            word_count++;
            token = strtok(NULL, " ");
        }

        if (word_count == 0) {
            continue;
        }

        // Count frequencies of duplicate words
        for (j = 0; j < word_count; j++) {
            for (k = j + 1; k < word_count; k++) {
                if (strcmp(words[j], words[k]) == 0) {
                    counts[j]++;
                    words[k][0] = '\0'; // Clear duplicate
                }
            }
        }

        // Calculate N! (factorial of total words)
        for (j = 1; j <= word_count; j++) {
            numerator_fact *= j;
        }

        // Calculate factorials of duplicate counts for the denominator
        for (j = 0; j < word_count; j++) {
            if (words[j][0] != '\0') {
                fact = 1;
                for (k = 1; k <= counts[j]; k++) {
                    fact *= k;
                }
                denominator_fact *= fact;
            }
        }

        // Final unique arrangements denominator
        total_arrangements = numerator_fact / denominator_fact;

        // Print result in 1/n format
        printf("1/%lld\n", total_arrangements);
    }

    return 0;
}
