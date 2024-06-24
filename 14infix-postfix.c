
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 30
int top=-1;
char stack[size];


void push(char c)
{
if(top == size-1)
{
printf("Stack Overflow \n");
}
else
{
stack[++top]=c;
}
}

char pop()
{
if(top == -1)
{
printf("Stack underflow \n");
}
else
{
return stack[top--];
}
}

int precedence(char op)
{
switch(op)
{
case'+':
case'-': return 1;

case'*':
case'/': return 2;

case'^': return 3;

default : return 0;
}
}

void infix_to_postfix(char infix[], char postfix[])
{
int i=0,j=0;
char symbol, temp;

while((symbol = infix[i])!='\0')
{
i++;
switch(symbol)
{
case '(': push(symbol);
          break;
case ')': while(stack[top]!='(')
{
temp=pop();
postfix[j++]=temp;
}
break;
case '+':
case '-':
case '*':
case '/':
case '^':

while(precedence(stack[top])>=precedence(symbol))
{
postfix[j++]=pop();
}
push(symbol);
break;
default:postfix[j++]=symbol;
}
}

while(top!=-1)
{
postfix[j++]=pop();
}
}

void main()
{
char infix[size], postfix[size];
printf("Enter Infix expresion : \n");
scanf("%s",infix);
infix_to_postfix(infix,postfix);
printf("The postfix expression is \n %s\n",postfix);
}