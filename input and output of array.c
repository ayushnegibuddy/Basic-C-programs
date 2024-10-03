#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i);  
    }
    printf("\nThe elements you entered are:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
