#include <stdio.h>

float findProduct(float f, int i) {
    return f * i;
}

int main() {
    float floatValue;
    int intValue;

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter an integer value: ");
    scanf("%d", &intValue);

    float product = findProduct(floatValue, intValue);

    printf("Product of %.2f and %d is: %f\n", floatValue, intValue, product);

    return 0;
}
