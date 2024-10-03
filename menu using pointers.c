#include <stdio.h>
#include <stdlib.h>

void displayPointer(int *ptr) {
    printf("Value stored at the address of pointer: %d\n", *ptr);
}

void displayChainOfPointers(int **ptr) {
    printf("Value stored at the address of pointer-to-pointer: %d\n", **ptr);
}

int main() {
    int option, num;
    int *p;
    int **pp;
    do {
        printf("\nMenu:\n");
        printf("1. Assign and Display using Simple Pointer\n");
        printf("2. Assign and Display using Chain of Pointers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter an integer value: ");
                scanf("%d", &num);

                p = &num;
                displayPointer(p);
                break;

            case 2:
                printf("Enter an integer value: ");
                scanf("%d", &num);

                p = &num;
                pp = &p;
                displayChainOfPointers(pp);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (option != 3);

    return 0;
}
