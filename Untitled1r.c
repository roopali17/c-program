#include<stdio.h>
int main()
{
    int n=2,i=1,k,sum=0;
    printf("hii\n");
        while(i!=11)
        {
            k=n*i;
            printf("%d\n",k);
            i++;
            sum=sum+k;
        }
        printf("%d",sum);
    return 0;
}
