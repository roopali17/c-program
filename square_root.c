#include<stdio.h>
#include<math.h>
int main()
{
   float n,squareroot;
   printf("Enter any number: ");
   scanf("%f",&n);
   if(n>=0.0)
   {
       squareroot=sqrt(n);
       printf("the square root of entered number %f is %f",n,squareroot);
   }
   return 0;
}
