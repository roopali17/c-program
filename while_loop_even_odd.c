#include<stdio.h>
void sum();
void main() {
    sum();
}
void sum()
{
    int a,b,c;
    printf("enter numbers:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}
