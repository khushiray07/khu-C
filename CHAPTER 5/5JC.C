#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 ){
        return 1;
      if (n == 2  ){
        return 1;
      }  
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 25;
    printf("The first %d numbers of Fibonacci are:\n", n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
