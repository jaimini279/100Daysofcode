// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main()
{
    int a[100], n, i, search, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", index);
    }

    return 0;
}
