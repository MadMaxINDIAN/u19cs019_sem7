#include <stdio.h>
#include <stdlib.h>

extern int *glob;
int *glob;
int *f(int *x, int *y, int *z)
{
    int *m = (int *)malloc(sizeof(int));
    glob = y; // Memory leak
    free(x);
    *m = *x;  // Use after free
    return z; // Memory leak detected
}

int main()
{
    return 0;
}