#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Input: "Hello World"
    printf("You entered: %s", str);
    return 0;
}
