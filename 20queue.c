#include<stdio.h>
#include<stdlib.h>
#define n 3
int Q[n],R=-1,F=-1;

void enqueue()
{
int ele;
printf("Enter the element \n");
scanf("%d",&ele);
if(R==n-1)
{
printf("Queue Overflow \n");
}
else
{
R=R+1;
Q[R]=ele;
if(F==-1)
{
F=F+1;
}
}
}

void dequeue()
{
int delete;
if(F==-1)
{
printf("Queue Underflow \n");
}
else
{
delete=Q[F];
F=F+1;
printf("Removed element is %d \n",delete);
if(F>R)
{
R=-1;
F=-1;
}
}
}

void display()
{
int i;
if(F==-1)
{
printf("Queue is empty \n");
}
else
{
printf("Queue elements are \n");
for(i=F;i<=R;i++)
{
printf("%d\n",Q[i]);
}
}
}

void main()
{
int choice;
do
{
printf("Enter your choice\n");
printf("1.Enqueue  2.Dequeue  3.Display  4.Exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
        break;
case 2:dequeue();
        break;
case 3:display();
        break;
case 4:exit (0);
default:printf("Invalid choice\n");
        break;
}
}
while(choice!=4);
}

