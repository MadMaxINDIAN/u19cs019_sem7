#include <stdio.h>

typedef enum
{
    RED,
    YELLOW,
    GREEN,
} color;

int main()
{
    color x;
    switch (x)
    {
    case RED:
        printf("Red");
        break;
    case YELLOW:
        printf("Yellow");
        break;
    }
    return 0;
}