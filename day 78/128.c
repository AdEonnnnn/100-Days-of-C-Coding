/*
Q128 (File Handling)
Read a text file and count vowels and consonants, ignoring digits and special characters.
*/

#include <stdio.h>

int main()
{
    char filename[100], ch;
    int vowels = 0, consonants = 0;
    FILE *fp;

    fgets(filename, sizeof(filename), stdin);
    for (int i = 0; filename[i] != '\0'; i++)
        if (filename[i] == '\n') filename[i] = '\0';

    fp = fopen(filename, "r");
    if (fp == NULL)
        return 1;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
    return 0;
}
