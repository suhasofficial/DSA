#include <stdio.h>

void main()
{
    int a[10], i, size, pos, ele;
    printf("Enter the size of array\n");
    scanf("%d", &size);

    printf("enter the elements into the array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the position \n");
    scanf("%d", &pos);

    if (pos <= 0 || pos > (size))
    {
        printf("invalid choice\n");
    }
    else
    {
        for (i = (pos - 1); i < (size - 1); i++)
        {
            a[i] = a[i + 1];
        }
        size--;
    }
    printf("Updated array elements\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}