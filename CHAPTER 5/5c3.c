#include <stdio.h>

void primeFactors(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    

    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Prime factors of %d are: ", number);
        primeFactors(number);
        printf("\n");
    }

    return 0;
}
