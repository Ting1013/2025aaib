// week14-1.cpp
// UVA11063 B2-Sequence  Part1: Input,Part2: Output
#include <stdio.h>

int main()
{

		int a[100];

		int N,t=1;

		while (scanf("%d", &N) == 1){//Part 1

			for(int i=0; i<N; i++) { // Part 1�G��J

				scanf("%d", &a[i]); // Part 1 �����G��J

			}

			// Part 2�G��X

			printf("Case #%d: It is a B2-Sequence.\n\n", t);
			t++;
		}

}
