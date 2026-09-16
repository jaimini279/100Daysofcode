// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main()
{
    int a[100][100], sum[100];
    int rows, columns, i, j;

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
        sum[i] = 0;

        for (j = 0; j < columns; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row: ");

    for (i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
