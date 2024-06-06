#include <stdio.h>
#include <string.h>

int main()
{
    /*
    char name[5] = {'a', 'b', 'c', 'd', 'e'};
        for (int i = 0; i < 5; i++)
        {
            scanf("%c", &name[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            printf("%c", name[i]);
        }

    char S[1001];
    scanf("%s", S);

    char T[1001];
    scanf("%s", T);

    int slentgh = strlen(S);
    int tlentgh = strlen(T);

    printf("%d %d\n", slentgh, tlentgh);
    printf("%s %s", S, T);


    char S[100001];
    fgets(S, 100001, stdin);

    for (int i = 0; S[i] != '\\'; i++)
    {
        printf("%c", S[i]);
    }
*/

    // char D[100001];
    // fgets(D, 6, stdin);
    // printf("%s", D);

    char f;
    scanf("%s", &f);
    int ascii_value = (int)f;
    printf("print character: %c\n", f);
    printf("Print ascii valu of %c: %d\n", f, ascii_value);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    char as[] = {'3'};
    printf("ascii valu of %c is %d", as, as);

    return 0;
}
