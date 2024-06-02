#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char n;
    for (int i = 0; i < 127; i++)
    {
        n = i;
        printf("ASCII valu of %d equall %c\n", i, n);
    }
    return 0;
}