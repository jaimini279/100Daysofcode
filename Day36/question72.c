// Find the sum of all elements in a matrix.

#include <stdio.h>

int main()
{
    int a[100][100], rows, columns, i, j, sum = 0;

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
        for (j = 0; j < columns; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
