#include <stdio.h>
int main (){
    float F,C;
    printf ("enter the temperature of the city in fahrenhite: \n");
    scanf("%f",&F);
    C = ((F-32)*5)/9;
    printf("the temperature of city in celcius is =%f\n",C);
    return 0;

}