#include<stdio.h>
#include<conio.h>
void main()
{
   int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
   printf("enter number of processes: ");
   scanf("%d",&n);
   printf("\nenter process burst time: ");
   for(i=0;i<n;i++)
   {
     printf("p[%d]:",i+1);
     scanf("%d",&bt[i]);
   }
   wt[0]=0;
   for(i=1;i<n;i++)
   {
     wt[i]=0;
     for(j=0;j<i;j++)
     wt[i]+=bt[j];
   }
   printf("\nProcess\tBurst time\tWaiting time\tTurnaround time\n");
   for(i=0;i<n;i++)
   {
      tat[i]=bt[i]+wt[i];
      avwt+=wt[i];
      avtat+=tat[i];
      printf("\np[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
   }
   avwt/=i;
   avtat/=i;
   printf("\naverage waiting time: %d",avwt);
   printf("\naverage turnaround time: %d",avtat);
}
