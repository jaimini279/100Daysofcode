#include <stdio.h>

int main()
{
    int a[100], n, i, largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    second = largest;

    for (i = 0; i < n; i++)
    {
        if (a[i] < largest)
        {
            if (second == largest || a[i] > second)
            {
                second = a[i];
            }
        }
    }

    if (second == largest)
    {
        printf("No second largest element");
    }
    else
    {
        printf("%d", second);
    }

    return 0;
}
