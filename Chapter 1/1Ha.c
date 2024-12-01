#include<stdio.h>

void main()

{

float bs,b,c,gs;

printf("Enter ramesh's basic salary\n");

scanf("%f",&bs);

b=(40*bs)/100;

c=(20*bs)/100;

gs=bs-(b+c);

printf("Ramesh's gross salary=%f\n",gs);

}