#include <stdio.h>

int main()
{
    int n, binary[100], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
    }
    else
    {
        while (n > 0)
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        for (j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
    }

    return 0;
}
