#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int pos;
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];

        // ar[0] = ar[1]
        // ar[1] = ar[2]
        // ar[2] = ar[3]
        // ar[3] = ar[4]
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}