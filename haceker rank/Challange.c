#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
    // Problem-1, assignment-2;
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d. I Want More Assignments\n", i);
        }

        return 0;
    */

    /*
int n;
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else if (n <= 0)
    {
        for (int k = n; k <= 0; k++)
        {
            printf("%d ", k);
        }
    }
    else
    {
        return 0;
    }
    */

    /*
int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d ", A[i]);
        }
    }
    */

    /*
int N;
    scanf("%d", &N);
    int sum_posetive_number = 0;
    int sum_negative_number = 0;
    for (int i = 0; i < N; i++)
    {
        int value;
        scanf("%d", &value);

        if (value > 0)
        {
            sum_posetive_number = sum_posetive_number + value;
        }
        else if (value < 0)
        {
            sum_negative_number = sum_negative_number + value;
        }
    }
    printf("%d %d", sum_posetive_number, sum_negative_number);
    */

    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    int V;
    scanf("%d", &V);
    A[X] = V;
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
