#include <stdio.h>

void min_max(int *a, int n, int *min, int *max)
{
    int *p;
    *max = *min = a[0];

    for (p = a; p < a + n; p++) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}