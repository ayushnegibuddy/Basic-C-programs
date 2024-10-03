#include <stdio.h>

int main() {
    int arr[10], sum = 0;
    int *ptr = arr;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }
    printf("\nThe sum of all elements is: %d\n", sum);

    return 0;
}
