// Q97: Print the initials of a name.

#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    if (name[0] != ' ' && name[0] != '\n')
    {
        printf("%c.", name[0]);
    }

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n')
        {
            printf("%c.", name[i]);
        }
    }

    return 0;
}
