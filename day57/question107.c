#include <stdio.h>

int main()
{
    int n, i, j, previous;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        previous = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }

        printf("%d", previous);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}
