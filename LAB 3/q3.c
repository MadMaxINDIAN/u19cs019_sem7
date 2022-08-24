#include "stdio.h"

#define abs(i) ((i) >= 0 ? (i) : -(i))

int main(int argc, char const *argv[])
{
    int x = -4;
    printf("Macro expected value: 3\nActual value: %d\n", abs(++x));
    return 0;
}