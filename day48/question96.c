// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;

            if (str[i] == '\n' || str[i] == '\0')
            {
                break;
            }
        }
    }

    printf("%s", str);

    return 0;
}
