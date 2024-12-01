#include <stdio.h>

int main() {
    struct employee {
        int no;
        float bal;
    };

    struct employee a[10];
    int i;

    for (i = 0; i <= 9; i++) {
        printf("Enter the account number and balance:\n");
        scanf("%d %f", &a[i].no, &a[i].bal);  // Correct: & is required here
    }

    for (i = 0; i <= 9; i++) {
        // Corrected: No need for & when printing the structure members
        printf("%d %.2f\n", a[i].no, a[i].bal);  
    }

    return 0;
}
