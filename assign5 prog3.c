#include<stdio.h>

int main()
{
    char a = 'a', b = 'b' ,c;
    c=a&b;
    printf("The binary equivalent of AND operator is: %d\n",c);
    c=a|b;
    printf("The binary equivalent of OR operator is: %d\n",c);
    c=a^b;
    printf("The binary equivalent of EXCLUSIVE OR operator is:%d\n",c);
    c=~a;
    printf("The binary equivalent of ONE'S COMPLEMENT operator is:%d\n",c);
    c=a<<2;
    printf("The binary equivalent of LEFT SHIFT operator is:%d\n",c);
    c=a>>2;
    printf("The binary equivalent of RIGHT SHIFT operator is:%d",c);
}