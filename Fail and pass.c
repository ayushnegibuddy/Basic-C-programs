#include <stdio.h>

int main() {
    int n, i;
    float marks[100], sum = 0.0, average;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    printf("Enter the marks of %d subjects:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &marks[i]);

        if (marks[i] < 40.0) {
            printf("Result: FAIL\n");
            return 0; 
        }

        sum += marks[i];
    }

    average = sum / n;

    if (average >= 75.0) {
        printf("Result: Mast laga re\n");
    } else if (average >= 60.0) {
        printf("Result: Good\n");
    } else if (average >= 40.0) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}