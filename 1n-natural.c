#include <stdio.h>
int main()
{
int i, n, sum=0;

printf("Enter the positive numbers:\n");
scanf("%d",&n);
for(i=0;i<=n;i++){
    sum +=i;
}
printf("Sum of all natural numbers is %d\n",sum);
}