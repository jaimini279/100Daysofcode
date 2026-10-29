#include <stdio.h>

int main()
{
    int n, i, j, k, max;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d", max);

        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}
