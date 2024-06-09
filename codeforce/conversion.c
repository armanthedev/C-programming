#include <stdio.h>
#include <string.h>

int main()
{

    char S[100001];
    fgets(S, 100001, stdin);

    for (int i = 0; i < strlen(S); i++)
    {

        if (S[i] == 44)
        {
            S[i] = S[i] - 12;
        }
        else if (S[i] >= 65 && S[i] <= 90)
        {
            S[i] = S[i] + 32;
        }
        else if (S[i] >= 97 && S[i] <= 122)
        {
            S[i] = S[i] - 32;
        }
    }
    printf("%s", S);
    return 0;
}