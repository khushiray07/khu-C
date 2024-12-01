#include <stdio.h>

int pow(int, int);

int main()
{
	int a, b, ans;
printf("Enter number and power: ");
scanf("%d%d", &a, &b);
ans = pow(a, b);
printf("%d  power %d = %d\n", a, b, ans);
	return 0;
}

int pow(int x, int y)
{
	int num = 1, i;
	for (i = 1; i <= y; i++)
		num = num*x;
	return(num);
}