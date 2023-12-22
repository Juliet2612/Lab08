#include <stdio.h>
#include <time.h>

int main () {
    double sum = 0;
    double add = 1;

    time_t begin, end;
    time(&begin);

    int iterations = 1000*1000*1000;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }

    time(&end);
    time_t elapsed = end - begin;

    printf("Result: %.20f\n", sum);

    printf("Time measured: %ld seconds.\n", elapsed);

    return 0;
}