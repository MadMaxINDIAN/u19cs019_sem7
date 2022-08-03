#include <stdio.h>
#include <stdbool.h>

char nullDeref(char *s)
{
    if (s == NULL)
    {
        return '\0';
    }
    return *s;
}

int main()
{
    nullDeref(NULL);
    return 0;
}