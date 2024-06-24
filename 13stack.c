#include <stdio.h>
#include <stdlib.h>
#define size 4
int stack[size], i, top = -1;

void push();
void pop();
void display();

void push()
{
    int ele;
    if (top == size - 1)
        printf("overflow\n");
    else
    {
        printf("Enter the element to insert\n");
        scanf("%d", &ele);
        top = top + 1;
        stack[top] = ele;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("popped elements is %d", stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == size - 1)
        printf("overflow\n");
    else
    {
        printf("Elements present in the array are \n");
        for (i = top; i >= 0; i--)
            printf("%d\n",stack[i]);
    }
}

void main()
{
    int choice;
    do
    {
        printf("1.Push() 2.pop() \n3.display() 4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 4);
}
