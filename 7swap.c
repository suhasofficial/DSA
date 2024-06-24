#include <stdio.h>

void main()
{
    int a[10], i, size, pos1, temp, pos2;
    printf("Enter the size of array\n");
    scanf("%d", &size);

    printf("enter the positions \n");
    scanf("%d%d", &pos1, &pos2);

    printf("enter the elements into the array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    if ((pos1 <= 0 || pos1 > (size + 1)) && (pos2 <= 0 || pos2 > (size + 1)))
    {
        printf("invalid choice\n");
    }
    else
    {
        temp = a[pos1 - 1];
        a[pos1 - 1] = a[pos2 - 1];
        a[pos2 - 1] = temp;
    }
    printf("Updated array elements\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}