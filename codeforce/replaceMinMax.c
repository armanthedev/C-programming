#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = ar[0];
    int max = ar[0];

    int min_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
            min_index = i;
        }
    }
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
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
    return 0;
}