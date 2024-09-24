#include <stdio.h>

int main() {
    float weight, postage;

    printf("Enter the weight of the letter in grams: ");
    scanf("%f", &weight);

    if (weight <= 50.0) {
        postage = (weight / 10.0) * 0.50;
    } else if (weight <= 150.0) {
        postage = (50.0 / 10.0) * 0.50 + ((weight - 50.0) / 10.0) * 0.40;
    } else if (weight <= 400.0) {
        postage = (50.0 / 10.0) * 0.50 + (100.0 / 10.0) * 0.40 + ((weight - 150.0) / 10.0) * 0.25;
    } else {
        postage = (50.0 / 10.0) * 0.50 + (100.0 / 10.0) * 0.40 + (250.0 / 10.0) * 0.25 + ((weight - 400.0) / 1000.0) * 25.0;
    }

    printf("The postage to be paid is: Rs %.2f\n", postage);

    return 0;
}