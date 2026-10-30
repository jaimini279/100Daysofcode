#include <stdio.h>

int main()
{
    char str[200];
    int i, newWord = 1;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            newWord = 1;
        }
        else if (newWord == 1)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }

            newWord = 0;
        }
    }

    printf("%s", str);

    return 0;
}
