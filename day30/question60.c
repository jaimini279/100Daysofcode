// Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main()
{
    int a[100], n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);

    return 0;
}
