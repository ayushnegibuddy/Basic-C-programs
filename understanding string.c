#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[90];
    int len;
    printf("Enter a string: ");
    scanf("%s", name);
    len = strlen(name);
    printf("String length is %d\n", len);
    return 0;
}
