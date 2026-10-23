/*
Q124 (File Handling)
Take source and destination filenames and copy the content using fgetc() and fputc().
*/

#include <stdio.h>

int main()
{
    char source[100], destination[100], ch;
    FILE *sourceFile, *destinationFile;

    fgets(source, sizeof(source), stdin);
    fgets(destination, sizeof(destination), stdin);
    for (int i = 0; source[i] != '\0'; i++)
        if (source[i] == '\n') source[i] = '\0';
    for (int i = 0; destination[i] != '\0'; i++)
        if (destination[i] == '\n') destination[i] = '\0';

    sourceFile = fopen(source, "r");
    destinationFile = fopen(destination, "w");
    if (sourceFile == NULL || destinationFile == NULL)
        return 1;

    while ((ch = fgetc(sourceFile)) != EOF)
        fputc(ch, destinationFile);

    fclose(sourceFile);
    fclose(destinationFile);
    printf("File copied successfully to %s", destination);
    return 0;
}
