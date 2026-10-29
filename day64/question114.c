#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k, length, maxLength = 0;

    scanf("%s", s);

    length = strlen(s);

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    break;
                }
            }

            if (k == j)
            {
                if (j - i + 1 > maxLength)
                {
                    maxLength = j - i + 1;
                }
            }
            else
            {
                break;
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}
