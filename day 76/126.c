/*
Q126 (File Handling)
Ask for a filename, open it in read mode, and display its content if it exists.
*/

#include <stdio.h>

int main()
{
    char filename[100], line[200];
    FILE *fp;

    fgets(filename, sizeof(filename), stdin);
    for (int i = 0; filename[i] != '\0'; i++)
        if (filename[i] == '\n') filename[i] = '\0';

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);
    fclose(fp);
    return 0;
}
