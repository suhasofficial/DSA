
#include<stdio.h>
void main()
{
int a[20],i,j,k,size,small,temp;
printf("Enter the size\n");
scanf("%d",&size);
printf("Enter the elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size-1;i++)
{
small=i;
for(j=i+1;j<size;j++)
{
if(a[j]<a[small])
{
small=j;
}
}
if(small!=i)
{
temp=a[i];
a[i]=a[small];
a[small]=temp;
}
}
printf("After sorting\n");
for(i=0;i<size;i++)
{
printf("%d\n",a[i]);
}
