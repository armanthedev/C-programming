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

    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (ar[min_index] > ar[i])
        {
            min_index = i;
        }
        if (ar[max_index] < ar[i])
        {
            max_index = i;
        }
    }

    int temp = ar[max_index];
    ar[max_index] = ar[min_index];
    ar[min_index] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}