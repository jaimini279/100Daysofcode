#include <stdio.h>

int main()
{
    int nums[100], n, target, i, j;
    int first = -1, second = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                first = i;
                second = j;
                break;
            }
        }

        if (first != -1)
        {
            break;
        }
    }

    printf("%d %d", first, second);

    return 0;
}
