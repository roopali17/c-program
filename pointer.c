#include<stdio.h>
void main()
{
  int a=6,b=12,*p,**q;
  printf("a=%d\t&a=%u\n",a,&a);
  printf("b=%d\t&b=%u\n",b,&b);
  p=&a;
  printf("*p=%d\n",*p);
  q=&p;
  printf("*q=%u\n",**q);
  **q=*p+*p;
    printf("a=%d\n",a);
    p=&b;
    printf("*p=%d",*p);
}
