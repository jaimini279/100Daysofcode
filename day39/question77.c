// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, columns, i, j, distinct = 1;

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

    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
