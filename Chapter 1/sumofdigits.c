#include <stdio.h>

int main() {
    int a, b, c, d, e, sum;

    printf("enter a five-digit number: ");
    scanf("%d", &a);

    
    if (a >= 10000 && a <= 99999) {
        
        b = a / 10000;            
        c = (a / 1000) % 10;        
        d = (a / 100) % 10;       
        e = (a / 10) % 10;        
        int f = a % 10;           

       
        sum = b + c + d + e + f;

        printf("Sum of digits of the entered five-digit number = %d\n", sum);
    } else {
        printf("Entered number is not a five-digit number.\n");
    }

    return 0;
}
