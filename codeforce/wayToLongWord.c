#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);      // If input is "Hello World", it stores "Hello World\n" in str
    str[strcspn(str, "\n")] = 0; // Remove the newline character
    printf("You entered: %s\n", str);

    return 0;
}
