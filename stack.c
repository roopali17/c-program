#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 10
void push();
int pop();
void traverse();
int stack[MAXSIZE];
int top=-1;
void main()
{
 int choice;
 char ch;
 do
 {
 //clrscr();
 printf("\n1.PUSH");
 printf("\n2.POP");
 printf("\n3.TRAVERSE");
 printf("\n4.ENTER YOUR CHOICE");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:push();
 break;
 case 2:printf("\nThe deleted element is %d\n",pop());
 break;
 case 3:traverse();
 break;
 default: printf("\nYou Entered Wrong");
 }
 printf("\n Do U Wish To Continue");
 fflush(stdin);
 scanf("%c",&ch);
 }
while(ch=='Y'|| ch=='y');
}
void push()
{
 int item;
 if(top==MAXSIZE-1)
 {
 printf("\n Stack Is Full");
 getch();
 exit(0);
 }
 else
 {
 printf("Enter the element to be inserted\n");
 scanf("%d",&item);
 top=top+1;
 stack[top]=item;
 }
}
int pop()
{
 int item;
 if(top==-1)
 {
 printf("The Stack Is Empty");
 getch();
 exit(0);
 }
 else
 {
 item=stack[top];
 top=top-1 ;
 }
 return(item);
}
void traverse()
{
 int i;
 printf("Traverse the element");
 if(top==-1)
 {
 printf("Stack is Empty");
 getch();
 exit(0);
 }
 else
 {
 for(i=top;i>=0;i--)
 {
 printf("\n%d",stack[i]);
 }
 }
}
