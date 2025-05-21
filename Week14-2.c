// week14-2.cpp
// UVA11063 B2-Sequence
// Part 1: Input, Part 2: Output
// Part 3: bigger and bigger, Part 4: Table[now], Part 5: for-for, Part 6: table [now] to check

#include <stdio.h>
int main()
{
    int a[100];
    int N, t = 1;

    while (scanf("%d", &N) == 1) {

        int bad = 0; // not bad

        for (int i = 0; i < N; i++) { // Part 1: Input
            scanf("%d", &a[i]);

            // Part 3: bigger and bigger
            if (i > 0 && a[i - 1] >= a[i]) {
                bad = 1;
            }
        }

        int table[20002] = {}; // Part 4: Table initialization

        for (int i = 0; i < N; i++) { // Part 5: for loops
            for (int j = i; j < N; j++) {
                int now = a[i] + a[j];

                // Part 6: Check if currentSum already exists
                if (table[now] > 0) {
                    bad = 1;
                }

                table[now]++;
            }
        }

        // Part 2: Output
        if (bad == 0)
            printf("Case #%d: It is a B2-Sequence.\n\n", t);
        else
            printf("Case #%d: It is not a B2-Sequence.\n\n", t);

        t++;
    }
}
