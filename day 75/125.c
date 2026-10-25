/*
Q125 (File Handling)
Open an existing file in append mode and append a new line.
*/

#include <stdio.h>

int main()
{
    char filename[100], text[200];
    FILE *fp;

    fgets(filename, sizeof(filename), stdin);
    fgets(text, sizeof(text), stdin);
    for (int i = 0; filename[i] != '\0'; i++)
        if (filename[i] == '\n') filename[i] = '\0';

    fp = fopen(filename, "a");
    if (fp == NULL)
        return 1;

    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File updated successfully with appended text.");
    return 0;
}
