#include <stdio.h>

int main()
{
    int a[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
