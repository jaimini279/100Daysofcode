#include <stdio.h>

int main()
{
    int n, i, j, left, right, pivot = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        left = 0;
        right = 0;

        for (j = 1; j <= i; j++)
        {
            left = left + j;
        }

        for (j = i; j <= n; j++)
        {
            right = right + j;
        }

        if (left == right)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
