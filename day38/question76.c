// Check if a matrix is symmetric.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, columns, i, j, symmetric = 1;

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

    if (rows != columns)
    {
        symmetric = 0;
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
