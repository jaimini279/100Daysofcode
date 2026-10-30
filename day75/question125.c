#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    printf("Enter text: ");
    fgets(str, 100, stdin);

    fprintf(fp, "%s\n", str);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
