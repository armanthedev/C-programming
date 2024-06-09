#include <stdio.h>
#include <string.h>

int main()
{

    char A[11];
    fgets(A, 11, stdin);
    char B[11];
    fgets(B, 11, stdin);
    int A_size = strlen(A);
    int B_size = strlen(B);
    printf("%d %d\n", A_size, B_size);
    if (A_size > 0 && A[A_size] == '\n')
    {
        A[A_size] = '\0';
    }
    if (B_size > 0 && B[B_size] == '\n')
    {
        B[B_size] = '\0';
    }
    printf("%s%s\n", A, B);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s", A, B);

    return 0;
}