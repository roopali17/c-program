#include<stdio.h>
int main()
{
    int n,max=-299999;
    scanf("%d",&n);
    while(n!=-1)
    {
        if(n>max)
          max=n;
            scanf("%d",&n);
    }
    printf("the largest number is %d",max);
    return 0;
}
