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
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}