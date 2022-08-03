#include <stdio.h>
#include <stdbool.h>

extern void setVal(int *x);
extern int getVal(int *x);

int check(int *x, int ch)
{
    if (ch == 1)
    {
        return *x;
    }
    else if (ch == 2)
    {
        return getVal(x);
    }
    else
    {
        setVal(x);
        return *x;
    }
}

int main()
{
    int *x, ch = 4;
    printf("%d", check(x, ch));
    return 0;
}