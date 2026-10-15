/**
 * Problem Name: Run Rate - 1
 * Book      : 52 Programming Problems & Solutions
 * Author    : Md. Abidur Rahman
 * Language  : C (C99 Standard)
 * Judge     : Dimik Online Judge
 */


#include <stdio.h>

int main(void)
{
    int T, r1, r2, B;
    double current_rr, asking_rr;

    if (scanf("%d", &T) != 1) return 0;

    while (T--)
    {
        scanf("%d %d %d", &r1, &r2, &B);
        current_rr = (r2 * 6.0) / (300 - B);

        if (r2 > r1) {
            asking_rr = 0.00;
        } else {
            asking_rr = ((r1 - r2 + 1) * 6.0) / B;
        }

        printf("%.2f %.2f\n", current_rr, asking_rr);
    }

    return 0;
}
