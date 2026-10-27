#include <stdio.h>

int main()
{
    int n, temp, digit, i, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}
