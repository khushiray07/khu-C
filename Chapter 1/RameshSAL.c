#include<stdio.h>

int main()

{

float a,b,c,d;

printf("Enter the ramesh's basic salary\n");


scanf("%f",&a);

b=(40*a)/100;

c=(20*a)/100;

d=a-(b+c);

printf("Ramesh's gross salary=%f\n",d);
return 0;
}