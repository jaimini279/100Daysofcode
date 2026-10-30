#include <stdio.h>

int main()
{
    int nums1[100], nums2[100], merged[200];
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first sorted array elements: ");

    for (i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second sorted array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
