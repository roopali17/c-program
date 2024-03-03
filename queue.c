#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
int q[MAXSIZE];
int f=-1,r=-1;
int x;
void qinsert();
void qdelete();
void qdisplay();
void main()
{
 int ch;
 char ans;
 do
 {
 //clrscr();
 printf("\n1.INSERT");
 printf("\n2.DELETE");
 printf("\n3.DISPLAY");
 printf("\n4.ENTER YOUR CHOICE");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:qinsert();
 break;
 case 2:qdelete();
 break;
 case 3:qdisplay();
 break;
 default: printf("\nYou Entered Wrong");
 }
 fflush(stdin);
 printf("\n Do U Wish To Continue");
 scanf("%c",&ans);
 }
 while(ans=='Y'|| ans=='y');
 getch();
}
void qinsert()
{
 if(f==MAXSIZE-1)
 printf("OverFlow");
 else
 {
 printf("\n Enter Element");
 scanf("%d",&x);
 r=r+1;
 q[r]=x;
 if(f==-1)
 f=0;
 }
}
void qdelete()
{
 if(f==-1)
 printf("Underflow");
 else
 {
 x=q[f];
 printf("Deleted Value is %d",x);
 if(f==r)
 {
 f=-1;
 r=-1;
 }
 else
 f=f+1;
 }
 }
 void qdisplay()
{
 int i;
 if(f==-1)
 printf("Queue is empty");
 else
 {
 for(i=f;i<=r;i++)
 printf("%d\n",q[i]);
 }
}
