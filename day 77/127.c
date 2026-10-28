/*
Q127 (File Handling)
Read input.txt, convert lowercase letters to uppercase, and write to output.txt.
*/

#include <stdio.h>

int main()
{
    char ch;
    FILE *source = fopen("input.txt", "r");
    FILE *destination = fopen("output.txt", "w");

    if (source == NULL || destination == NULL)
        return 1;

    while ((ch = fgetc(source)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);
    return 0;
}
