#include <stdio.h>
#include <math.h>

int main() {
    int t1, t2, t3;
    float time123;

    printf("Enter three values: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    int MAX = t1;
    if (t2 > MAX)
        MAX = t2;
    if (t3 > MAX)
        MAX = t3;

    time123 = (float)MAX;

    printf("Time required to eat the pie: %.2f hours\n", time123);

    return 0;
}
