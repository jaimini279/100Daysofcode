// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                printf("%c", str[i]);
                break;
            }
        }
    }

    return 0;
}
