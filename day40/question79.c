// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, columns, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (k = 0; k < rows + columns - 1; k++)
    {
        if (k % 2 == 0)
        {
            for (i = rows - 1; i >= 0; i--)
            {
                j = k - i;

                if (j >= 0 && j < columns)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else
        {
            for (j = columns - 1; j >= 0; j--)
            {
                i = k - j;

                if (i >= 0 && i < rows)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}
