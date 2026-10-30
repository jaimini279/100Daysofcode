#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Source file not found");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL)
    {
        printf("Error creating destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationFile);

    return 0;
}
