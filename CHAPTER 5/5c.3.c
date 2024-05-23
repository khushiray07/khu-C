#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
    if (year % 100 == 0) {
     if (year % 400 == 0) {
    return 1;  
 } else 
 {
     return 0; 
 }
} else 
        
{
     return 1;  
    }

    } else
     {
return 0; 
    }
}

int main() {
    int year;
    int leap;

    
    printf("Enter a year: ");
    scanf("%d", &year);

    
    leap = isLeapYear(year);

   
    if (leap) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
