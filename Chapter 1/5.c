#include<stdio.h>

int main()

{

float a,b,c,d,e;

printf("enter the distance between two cities(in km)\n");

scanf("%f",&a);

b=a*1000;

c=(a*1000)/0.3048;

d=(12000*a)/0.3048;

e=a*100000;

printf("distance between two cities(in meters)=%f\n",b);

printf("distance between two cities(in feet)=%f\n",c);
printf("distance between two cities(in feet)=%f\n",c);

printf("distance between two cities(in inches)=%f\n",d);

printf("distance between two cities(in centimeters)=%f\n",e);
return 0;
}