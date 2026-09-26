// Check if one string is a rotation of another.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, k, len1 = 0, len2 = 0, rotation = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[len1] != '\0')
    {
        len1++;
    }

    while (str2[len2] != '\0')
    {
        len2++;
    }

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            k = 0;

            for (j = 0; j < len1; j++)
            {
                if (str1[(i + j) % len1] == str2[j])
                {
                    k++;
                }
            }

            if (k == len1)
            {
                rotation = 1;
                break;
            }
        }
    }

    if (rotation == 1)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}
