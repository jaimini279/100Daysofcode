#include <stdio.h>

int main()
{
    int nums[100], count[1000] = {0};
    int n, i, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (nums[i] < 0 || nums[i] >= 1000)
        {
            printf("Invalid element");
            return 0;
        }

        count[nums[i]]++;

        if (count[nums[i]] == 2)
        {
            repeated = nums[i];
            break;
        }
    }

    printf("%d", repeated);

    return 0;
}
