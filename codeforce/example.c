#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int A;
    int B;
    int C;
    scanf("%d %d %d", &A, &B, &C);

    if (A <= B && A <= C)
    {
        printf("%d", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }
    printf(" ");
    // another condition
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }
    return 0;
}
