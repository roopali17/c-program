#include<stdio.h>
int main()
{
    int a=5,b=6;
    char c='C';
    //mistake 1
    printf("%d %d %d",a,b);
    //mistake 2
     printf("\n%d",a,b);
    //mistake 3
    printf("\n%f",a);
    //mistake 4
    printf("\n%d",c);
    return 0;
}
