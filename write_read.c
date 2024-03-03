#include<stdio.h>
int*sum(int*,int*);
int r;
void main()
{
    int a,b;
    int *c;
    printf("enter no:\n");
    scanf("%d %d",&a,&b);
    c=sum(&a,&b);
    printf("sum=%d",*c);
    printf("sum=%d",sum(25,35));
}
int* sum(int *p,int *q)
{
    r=*p+*q;
    return(&r);
}
