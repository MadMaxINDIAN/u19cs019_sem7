#include <stdio.h>
#include <stdbool.h>

int da(int *ptr1, int *ptr2)
{
    *ptr1 = 10;
    *ptr2 = 11;
    return *ptr1;
} 

int main()
{
    int a = 10,b=1;
    da(&a, &b);
    return 0;
}

