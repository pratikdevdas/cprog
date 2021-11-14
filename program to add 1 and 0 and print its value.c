#include<stdio.h>
int main()
{
	int c,c2;
	printf("Enter two characters\n");
	c=getc(stdin);
	c2=getchar();
	int sum = c+c2;
	printf("%d + %d =",c,c2);
	putchar(sum);
}

