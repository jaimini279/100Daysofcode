#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int sum = 0, total, missing;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("%d", missing);

    return 0;
}
