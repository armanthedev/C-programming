#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
        // sum= 0 + 10=10;
        // sum= 10 + 20=30;
        // sum=30+ 30=60;
        // sum=60+ 40=100;
        // sum=100+ 50=100;
    }

    printf("%d\n", sum);
    return 0;
}