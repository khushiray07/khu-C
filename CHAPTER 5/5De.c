#include <stdio.h>

void prime (int x);

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}

void prime(int x) {
    int fac;
    for (fac = 2; fac <= x; fac++) {
        while (x % fac == 0) {
     printf("%d ", fac);
      x = x / fac;
        }
    }
    printf("\n"); 
}