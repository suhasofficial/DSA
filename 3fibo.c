#include <stdio.h>
int main()
{
    int n , first=0, second=1, next,i;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("fibonacci series :\n");
    for (i=0;i<n;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
}