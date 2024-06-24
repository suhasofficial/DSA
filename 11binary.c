#include <stdio.h>
void main()
{
    int a[20], i, size, ele, flag = 0, right, left = 0, mid, result;
    printf("Enter the size\n");
    scanf("%d", &size);

    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the search element\n");
    scanf("%d", &ele);
    
    right = size - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == ele)
        {
            result = mid;
            flag = 1;
            break;
        }
        else if (a[mid] < ele)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (flag == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at position %d\n", result);
    }
}