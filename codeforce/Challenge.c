#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
    //Welcome for you with Conditions
     int a;
        int b;

        scanf("%d%d", &a, &b);

        if (a >= b)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

// problem (J. Multiples);
    int A;
    int B;
    scanf("%d %d", &A, &B);

    if (A % B == 0 || B % A == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }

    // Loop through ASCII values from 0 to 127

    char ch;
    for (int i = 0; i < 128; i++)
    {
        ch = i; // Assigning ASCII value to the character
        printf("ASCII value of %c is %d\n", ch, i);
    }
    // ASCII value print;

    int letter;
    scanf("%d", &letter);

    printf("This is ASCII value of %c", letter);

    int n;
    for (int i = 0; i <= 127; i++)
    {
        n = i;
        printf("The This is ASCII character value %c of  %d\n", n, i);
    }

    int N;
    scanf("%d", &N);
    if()

    int X;
    scanf("%d", &X);

    if (X % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    // Problem (N. Char)
    char a;
    scanf("%c", &a); // we have to input the character;
    if (a >= 97 && a <= 122)
    {
        int ans = a - 32;
        printf("%c", ans);
    }
    else if (a >= 65 && a <= 90)
    {
        int anss = a + 32;
        printf("%c", anss);
    }
    else
    {
        return 0;
    }
     */
    // K. Max and Min

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
