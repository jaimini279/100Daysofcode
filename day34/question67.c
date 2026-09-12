// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int a[100], n, i, position, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &position, &element);

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
