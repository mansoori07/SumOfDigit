#include <stdio.h>
int digit(int);
main()
{
	int n,d;
	printf("Input number:");
	scanf("%d",&n);
	d=digit(n);
	printf("Sum of digits:%d",d);
}
int digit(int n)
{
	int s;
	if(n==0)
	{
		return s;
	}
	else
	{
		return s= n%10+ digit(n/10);
	}
}
