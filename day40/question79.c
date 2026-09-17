// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, columns, i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for (d = 0; d < rows + columns - 1; d++)
    {
        if (d % 2 == 0)
        {
            for (i = d; i >= 0; i--)
            {
                j = d - i;

                if (i >= 0 && i < rows && j >= 0 && j < columns)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else
        {
            for (j = d; j >= 0; j--)
            {
                i = d - j;

                if (i >= 0 && i < rows && j >= 0 && j < columns)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}
