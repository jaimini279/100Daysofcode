// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, columns, i, j, sum = 0;

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
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}
