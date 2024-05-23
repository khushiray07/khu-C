#include <stdio.h>

void func(int a, int b, int c, int *d, int *f);

int main() {
int s1, s2, s3;
int avg, percent;

    printf("Please enter the marks of 3 subjects: \n");
    scanf("%d%d%d", &s1, &s2, &s3);

    func(s1, s2, s3, &avg, &percent);

    printf("Average = %d\nPercentage = %d\n", avg, percent);

    return 0;
}

void func(int a, int b, int c, int *d, int *f) {
    *d = (a + b + c) / 3;  
    *f = ((a + b + c) * 100) / 300; 
}
