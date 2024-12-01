#include <stdio.h>
main( )
{
int a ;
a = sumdig ( 12345 ) ;
printf ( "\n%d", a ) ;
}
sumdig ( int num )
{
static int sum ;
int a, b ;
a = num % 10 ;
b = ( num - a ) / 10 ;
sum = sum + a ;
if ( b != 0 )
sumdig ( b ) ;
else
return ( sum ) ;
}