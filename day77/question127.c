#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file");

        if (fp1 != NULL)
            fclose(fp1);

        if (fp2 != NULL)
            fclose(fp2);

        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully!");

    return 0;
}
