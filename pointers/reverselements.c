#include <stdio.h>

#define N 4

int main() {
    int a[N] = {0, 1, 2, 3};
    int *p;

    for (p = a + N - 1; p >= a; p--) {
        printf("%d ", *p);
    }

    return 0;
}