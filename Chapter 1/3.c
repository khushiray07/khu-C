#include<stdio.h>

int main()

{

float a,b,c,d,e, sum,g;

printf("enter the marks obtained by the students in 5 subjects\n");

scanf("%f%f%f%f%f",&a,&b, &c,&d,&e);

sum=a+b+c+d+e;

g=(sum/500)*100;

if(sum<=500)

{

printf("aggregate marks=%f\n",sum);

printf("percentage marks=%f\n",g);

}

else

{

printf("invalid marks\n");

}
return 0;
}