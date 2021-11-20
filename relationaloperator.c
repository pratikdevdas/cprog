#include<stdio.h>
int main()
{
  int a,b,c;
  char d,e,f;
  double g,h,i;
  a=6;
  b=10;
  c=a>b;
  printf("The value of a>b:%d\n",c);
  a=6;
  b=10;
  c=a<b;
  printf("The value of a<b:%d\n",c);
  a=6;
  b=10;
  c=a==b;
  printf("The value of a==b:%d\n",c);
  a=6;
  b=6;
  c=a==b;
  printf("The value of a==b:%d\n",c);
  a=6;
  b=6;
  c=a!=b;
  printf("The value of a!=b:%d\n",c);
  a=6;
  b=10;
  c=a!=b;
  printf("The value of a!=b:%d\n",c);
  d='A';
  e='B';
  f=d<e;
  printf("The value of d<e:%d\n",f);
  g=3.5;
  h=2.5;
  i=g<h;
  printf("The value of g<h:%d\n",i);
}