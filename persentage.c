#include <stdio.h>

int main() {
    int marks[5];
    int i;
    int total = 0;
    float percentage;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500.0) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("Grade: A\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: A-\n");
    } else if (percentage >= 40 && percentage < 50) {
        printf("Grade: B+\n");
    } else {
        printf("Grade: B-\n");
    }

    return 0;
}