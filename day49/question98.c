// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0')
        {
            last = i + 1;
        }
    }

    if (last == 0)
    {
        printf("%s", name);
    }
    else
    {
        printf("%c.", name[0]);

        for (i = 1; i < last; i++)
        {
            if (name[i - 1] == ' ' && name[i] != ' ')
            {
                printf("%c.", name[i]);
            }
        }

        printf(" %s", &name[last]);
    }

    return 0;
}
