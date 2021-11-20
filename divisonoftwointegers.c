#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("The quotient is:%d\n",c);
	printf("The remainder is:%d  ",d);
	return 0;
}