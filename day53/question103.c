#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int total = 0, left = 0, right, pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for (i = 0; i < n; i++)
    {
        right = total - left - nums[i];

        if (left == right)
        {
            pivot = i;
            break;
        }

        left = left + nums[i];
    }

    printf("%d", pivot);

    return 0;
}
