// Q94: Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i, j = 0, length = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if (length > max)
            {
                max = length;
                longest[length] = '\0';

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[i - length + j];
                }

                longest[length] = '\0';
            }

            length = 0;

            if (str[i] == '\0')
            {
                break;
            }
        }
        else
        {
            length++;
        }
    }

    printf("%s", longest);

    return 0;
}
