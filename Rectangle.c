#include <stdio.h>

int main() {
    int length1, breadth1, length2, breadth2, length3, breadth3;
    int perimeter1, perimeter2, perimeter3;
    int maxPerimeter;
    printf("Enter the length and breadth of rectangle 1: ");
    scanf("%d %d", &length1, &breadth1);

    printf("Enter the length and breadth of rectangle 2: ");
    scanf("%d %d", &length2, &breadth2);

    printf("Enter the length and breadth of rectangle 3: ");
    scanf("%d %d", &length3, &breadth3);
    perimeter1 = 2 * (length1 + breadth1);
    perimeter2 = 2 * (length2 + breadth2);
    perimeter3 = 2 * (length3 + breadth3);
    maxPerimeter = (perimeter1 > perimeter2) ? 
                    ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) : 
                    ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);
    printf("The highest perimeter is: %d\n", maxPerimeter);

    return 0;
}
