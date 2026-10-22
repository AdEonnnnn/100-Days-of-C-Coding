/*
Q123 (File Handling)
Read a text file and count characters, words, and lines.
*/

#include <stdio.h>

int main()
{
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0, inWord = 0;
    FILE *fp;

    fgets(filename, sizeof(filename), stdin);
    for (int i = 0; filename[i] != '\0'; i++)
    {
        if (filename[i] == '\n')
            filename[i] = '\0';
    }

    fp = fopen(filename, "r");
    if (fp == NULL)
        return 1;

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }
    if (characters > 0 && (ch == '\n' || lines == 0) && lines == 0)
        lines = 1;
    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d", characters, words, lines);
    return 0;
}
