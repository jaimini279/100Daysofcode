// Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i, j, start = 0, length = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            length = i - start;

            if (length > max)
            {
                max = length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            start = i + 1;
        }

        if (str[i] == '\0')
        {
            break;
        }
    }

    printf("%s", longest);

    return 0;
}
