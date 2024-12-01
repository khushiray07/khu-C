#include <stdio.h>
int main(){
    float len ,brth,rad,areaOFrect,pmtrOFrect,areaOFcircle, pmtrOFcircle;
    printf ("enter the length, breadth of rectangle and  radius of circle:");
    scanf("%f %f %f",&len ,&brth,&rad);
    areaOFrect=len*brth;
    pmtrOFrect=2*(len+brth);
    areaOFcircle=3.14*rad*rad;
    pmtrOFcircle=2*3.14*rad;
    printf ("area of rectangle=%f\n",areaOFrect);
    printf ("area of circle =%f\n",areaOFcircle);
    printf("perimeter of rectangle =%f",pmtrOFrect);
        printf("perimeter of circle =%f",pmtrOFcircle);
        return 0;
}