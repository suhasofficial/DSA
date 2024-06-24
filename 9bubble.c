
#include <stdio.h>
void main()
{
    int a[20], i, j, size, temp, flag = 0;

    printf("Enter the size\n");
    scanf("%d", &size);

    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
    }
    printf("Updated array\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}
