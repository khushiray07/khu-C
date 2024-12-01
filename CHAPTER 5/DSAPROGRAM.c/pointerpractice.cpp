#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 using namespace std;
 int main(){
    int i;
    // int a =10;
    // int*p;
    // p=&a;
    // printf("using pointer %d",*p);
    // cout<<a<<endl;



//     int A[5]={5,6,8,4,3};// anything we are are declaring stored in stack.
//     int *p;
//     p=A;

//     for (i=0;i<5;i++)
//     cout<<A[i]<<endl;
//     cout<<p[i]<<endl;
//     return 0;
//  }

// now we want to store in heap
int *p;
p=new int[5];
p=(int*)malloc(5*sizeof(int));
p[0]=2;p[1]=4;p[2]=5;p[3]=6;p[4]=8;
for (i=0;i<5;i++)

    cout<<p[i]<<endl;
    delete [ ]p;    // used in cpp for remove the memory
    free(p);   // used in c
    return 0;
 }
 
