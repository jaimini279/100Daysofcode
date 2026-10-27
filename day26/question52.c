#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        if (i <= 3)
        {
            j = 2 * i - 1;
        }
        else
        {
            j = 2 * (5 - i) + 1;
        }

        while (j > 0)
        {
            printf("*\n");
            j--;
        }

        if (i < 5)
        {
            printf("\n");
        }
    }

    return 0;
}
