// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int a[100], n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++)
    {
        if (element < a[i])
        {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = element;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
