#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    strcpy(string2, string1);
    printf("String1: %s", string1);
    printf("String2 (copied): %s", string2);
    return 0;
}
