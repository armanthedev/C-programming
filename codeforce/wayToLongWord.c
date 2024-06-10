#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char S[101];
        scanf("%s", S);
        int len = strlen(S);

        if (len > 10)
        {
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        }
        else
        {
            printf("%s\n", S);
        }
    }
}

// // Replace space character at the end with an underscore, if present
// int j = 0;
// for (int i = 0; i < strlen(S); i++)
// {
//     if (S[i] != ' ')
//     {
//         S[j] = S[i];
//         j++;
//     }
// }
