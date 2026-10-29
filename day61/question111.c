#include <stdio.h>

int main()
{
    int n, i, j, k, negative;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i <= n - k; i++)
    {
        negative = 0;

        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                negative = arr[j];
                break;
            }
        }

        printf("%d", negative);

        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}
