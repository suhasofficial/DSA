
#include <stdio.h>
void main()
{
    int a[20], i, size, ele, flag = 0;
    printf("Enter the size\n");
    scanf("%d", &size);
    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element\n");
    scanf("%d", &ele);
    for (i = 0; i < size; i++)
    {
        if (a[i] == ele)
        {
            printf("Element found at %d position\n", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Element not found");
    }
}
