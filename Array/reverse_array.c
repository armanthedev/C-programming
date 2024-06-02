#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n); // input array size;
    int ar[n];       // array size;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // insert array value by for loop;
    }
    // reverse array;
    /*
    for (int i = n - 1; i >= 0; i--) // we have to start from 4 that's why we wrote n-1 that means array size 5-1 = 4;
     {
         printf("%d\n", ar[i]); // print reverse array;
     }
    */
    for (int i = n-1; i >= 0; i--) // we have to start from 4 that's why we wrote n-1 that means array size 5-1 = 4;
    {
        printf("%d\n", ar[i]); // print reverse array;
    }
    // int n[6]; Array declaretion

    /*
    int numbers[5];
     for (int i = 0; i < 5; i++)
     {
         scanf("%d", &numbers[i]);
         printf("%d\n", numbers[i]);
     }
    */

    return 0;
}